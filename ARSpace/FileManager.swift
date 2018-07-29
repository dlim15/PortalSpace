//
//  FileManager.swift
//  ARSpace
//
//  Created by Devin Lim on 7/16/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import Foundation
import Photos

final class CameraFileManager:NSObject,SGCFileCopyDelegate{
    static let fileManager:CameraFileManager = CameraFileManager()
    let filePath:FilePathRelated = FilePathRelated.filePath
    var fileM:SGCFileManager?
    var device:SGCDevice?
    
    
    private override init(){
        
    }
    func didReceiveFileCopyProgress(_ progress: Float) {
        
    }
    func setFileManager(device:SGCDevice){
        self.fileM = device.fileManager
    }
    func saveLatestFile(){
        fileM?.getFileInformations(withStart: 0, requestCount: 1, completionHandler: { (error:Error?, fileInfos:SGCFileInformations?) in
            if((error == nil) && (fileInfos != nil)){
                let fileInfo = fileInfos?.files![0]
                print("FileInfo is:")
                print((fileInfo?.id)!)
                print((fileInfo?.title)!)
                print((fileInfo?.date)!)
                self.fileM?.copyFile(withID: (fileInfo?.id)!, albumTitle: "AR Space", tiltCorrection: true, completionHandler: { (error:Error?) in
                    //print(error.debugDescription)
                    print("copy completed")
                    self.moveFileFromAlbum(fileInfo:fileInfo!)
                })
                
                //Todo: put copied file into the app based private location.
            }
        })
    }
    func moveFileFromAlbum(fileInfo:SGCFileInformation){
        let fetchOptions = PHFetchOptions()
        fetchOptions.sortDescriptors = [NSSortDescriptor(key: "creationDate", ascending: true)]
        let fetchResult = PHAsset.fetchAssets(with: .video, options: fetchOptions).lastObject
        PHImageManager().requestAVAsset(forVideo: fetchResult!, options: nil, resultHandler: { (avurlAsset, audioMix, dict) in
            let newObj = avurlAsset as! AVURLAsset
            let newUrl = newObj.url.absoluteString.replacingOccurrences(of: "file://", with: "")
            print("URL is : " + newUrl)
            print("To URL is : " + self.filePath.documentPath + self.filePath.generateFileName() + ".MP4")
            do{
                try FileManager.default.copyItem(atPath: newUrl, toPath: self.filePath.documentPath + self.filePath.generateFileName() + ".MP4")
                try FileManager.default.removeItem(atPath: newUrl)
            }catch{
                print("Failed to move the Item")
                let nsError = error as NSError
                print(nsError.localizedDescription)
            }
        })
    }
}

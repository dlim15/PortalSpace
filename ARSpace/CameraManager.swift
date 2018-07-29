//
//  CameraManager.swift
//  ARSpace
//
//  Created by Devin Lim on 7/13/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import Foundation


final class CameraManager:NSObject,SGCCameraDelegate{

    static let cameraManager:CameraManager = CameraManager()
    var camera:SGCCamera?
    private override init(){
        
    }
    func didReceiveSDCardFull() {
        
    }
    func didReceiveSDCardSlow() {
        
    }
    func setCamera(sgcCamera:SGCCamera){
        self.camera = sgcCamera
    }
    func showPreview(view:UIView){
        self.camera?.setLensMode(SGCLensMode.dual, completionHandler: { (error:Error?) in
            
            })
        // find out a way to display preview while recording.
        //self.camera?.startPreview(with: view)
        //self.camera?.stopPreview()
    }
    func startRecording(){
        self.camera?.startRecording(completionHandler: { (error:Error?, uiInteger:UInt) in
            
            })
    }
    func stopRecording(){
        self.camera?.stopRecording(completionHandler: { (error:Error?, uiInteger:UInt) in
            
            })
    }
}

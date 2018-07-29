//
//  AlbumViewController.swift
//  ARSpace
//
//  Created by Devin Lim on 7/12/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import UIKit
import AVFoundation
class AlbumViewController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource {
    
    @IBOutlet weak var albumCollectionView: UICollectionView!
    var deviceManager: DeviceManager = DeviceManager.globalDevice
    let dialogBox = DialogBox.dialogBox
    var selectOn = false as Bool
    var images = [] as [UIImage]
    let filePath:FilePathRelated = FilePathRelated.filePath
    var videoPath:[URL?] = []
    var selectedImages = [] as [Int]
    var ARSpaceController:ARSpaceViewController?
    @IBAction func CameraAppear(_ sender: Any) {
        print("1")
        if dialogBox.connectCheckBox(controller: self){
            let ARCameraController:ARCameraViewController = self.storyboard?.instantiateViewController(withIdentifier: "ARCameraViewController") as! ARCameraViewController
            self.navigationController?.pushViewController(ARCameraController, animated: true)
        }
        print("2")
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return images.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "AlbumCell", for: indexPath) as! AlbumCell
        cell.imgCell.image = images[indexPath.row]
        cell.layer.borderColor = UIColor.black.cgColor
        cell.layer.borderWidth = 1
        print("Cell created")
        return cell
    }
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        moveToARView(itemAt: indexPath.row)
    }
    func moveToARView(itemAt: Int){
        ARSpaceController?.filepath = videoPath[itemAt]
        self.navigationController?.pushViewController(ARSpaceController!, animated: true)
    }
    func getThumbnail(path: URL) -> UIImage? {
        do{
            let asset = AVURLAsset(url: path, options: nil)
            let imgGenerator = AVAssetImageGenerator(asset: asset)
            imgGenerator.appliesPreferredTrackTransform = true
            let cgImg = try imgGenerator.copyCGImage(at: CMTimeMake(0, 1), actualTime: nil)
            return UIImage(cgImage: cgImg)
        }catch let error{
            print("Error getting thumbnail")
            return nil
        }
    }
    func reloadImgs(){
        print("Reloaded")
        images.removeAll()
        for url in videoPath{
            images.append(getThumbnail(path: url!)!)
        }
    }
    override func viewDidLoad() {
        super.viewDidLoad()
        reloadImgs()
        albumCollectionView.delegate = self
        albumCollectionView.dataSource = self
        ARSpaceController = self.storyboard?.instantiateViewController(withIdentifier: "ARSpaceViewController") as! ARSpaceViewController
        do{
            let filesAtURL = try FileManager.default.contentsOfDirectory(at: URL(fileURLWithPath: filePath.documentPath), includingPropertiesForKeys: nil)
            for file in filesAtURL{
                if file.absoluteString.contains(".MP4"){
                    videoPath.append(file)
                }
            }
        }catch{}
        print(videoPath)
        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(true)
        reloadImgs()
    }

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}

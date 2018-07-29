//
//  ARCameraViewController.swift
//  ARSpace
//
//  Created by Devin Lim on 7/12/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import UIKit

class ARCameraViewController: UIViewController {
    @IBOutlet weak var btnRecord: UIButton!
    @IBOutlet weak var CameraPreview: UIView!
    var isRecording = false as Bool
    var deviceManager:DeviceManager = DeviceManager.globalDevice
    var cameraManager:CameraManager = CameraManager.cameraManager
    var fileManager:CameraFileManager = CameraFileManager.fileManager
    override func viewDidLoad() {
        super.viewDidLoad()
        cameraManager.setCamera(sgcCamera: deviceManager.camera!)
        fileManager.setFileManager(device: deviceManager.device!)
        cameraManager.showPreview(view: CameraPreview)
        // Do any additional setup after loading the view.
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    @IBAction func btnRecordClicked(_ sender: Any) {
        if isRecording{
            cameraManager.stopRecording()
            btnRecord.setTitle("Start", for: UIControlState.normal)
            fileManager.saveLatestFile()
        }else{
            cameraManager.startRecording()
            btnRecord.setTitle("Stop", for: UIControlState.normal)
        }
        isRecording = !isRecording
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

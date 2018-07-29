//
//  DialogBox.swift
//  ARSpace
//
//  Created by Devin Lim on 7/12/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import Foundation

final class DialogBox{
    var deviceManager:DeviceManager = DeviceManager.globalDevice
    static let dialogBox = DialogBox()
    private init(){
        
    }
    func connectCheckBox(controller:UIViewController) -> Bool{
        let connectAlert = UIAlertController(title: "Connect Device", message: "Please check if the device is properly connected", preferredStyle: UIAlertControllerStyle.alert)
        var isCancelled = false as Bool
        connectAlert.addAction(UIAlertAction(title: "Connect", style: .default, handler: { (action:UIAlertAction) in
            self.deviceManager.findDevice()
        }))
        connectAlert.addAction(UIAlertAction(title: "Cancel", style: .default, handler: { (action:UIAlertAction) in
            isCancelled = true
        }))
        if !deviceManager.deviceConnected{
            controller.present(connectAlert, animated: true, completion: nil)
        }
        return deviceManager.deviceConnected
    }
}

//
//  DeviceManager.swift
//  ARSpace
//
//  Created by Devin Lim on 7/12/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import Foundation

final class DeviceManager : NSObject, SGCDeviceFinderDelegate{
    static let globalDevice = DeviceManager()
    var deviceFinder:SGCDeviceFinder?
    var device:SGCDevice?
    var deviceConnected = false as Bool
    var camera:SGCCamera?
    var fileManager:SGCFileManager?
    var setting:SGCSetting?
    func didFind(_ device: SGCDevice) {
        self.device = device
        print("found Device")
        deviceConnected = true
        self.camera = device.camera
        self.fileManager = device.fileManager
        self.setting = device.setting
    }
    
    func didRemoveDevice(_ deviceID: String) {
        print("remove Device")
        deviceConnected = false
    }
    
    func didDenyConnection() {
        print("Denied Device")
        deviceConnected = false
    }
    
    override private init(){
    }
    func findDevice(){
        deviceFinder = SGCDeviceFinder.init()
        deviceFinder?.delegate = self
        deviceFinder?.search()
    }
}

//
//  FilePathRelated.swift
//  ARSpace
//
//  Created by Devin Lim on 7/22/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import Foundation

final class FilePathRelated{
    let documentPath:String = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask, true)[0] + "/"
    private let formatter = DateFormatter()
    static let filePath:FilePathRelated = FilePathRelated()
    private init(){
        formatter.dateFormat = "yyyy-MM-dd_HH:mm:ss"
    }
    func generateFileName() -> String{
        return formatter.string(from: Date())
    }
}

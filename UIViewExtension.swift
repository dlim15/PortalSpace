//
//  UIViewExtension.swift
//  ARSpace
//
//  Created by Devin Lim on 7/25/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import Foundation

extension UIView{

    func repositioning(byY:Float){
        UIView.animate(withDuration: 1.0) {
            self.frame = CGRect(x: self.frame.origin.x, y:self.frame.origin.y + CGFloat(byY), width:self.frame.width, height:self.frame.height)
        }
    }
}

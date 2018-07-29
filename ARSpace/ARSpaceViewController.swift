//
//  ARSpaceViewController.swift
//  ARSpace
//
//  Created by Devin Lim on 7/18/18.
//  Copyright © 2018 Devin Lim. All rights reserved.
//

import UIKit
import SceneKit
import ARKit
class ARSpaceViewController: UIViewController, ARSCNViewDelegate {
    
    @IBOutlet weak var btnShow: UIButton!
    @IBOutlet weak var menuView: UIView!
    @IBOutlet weak var sceneView: ARSCNView!
    let configuration = ARWorldTrackingConfiguration()
    var pid:Int?
    var filepath:URL?
    var isMenuUp = true
    override func viewDidLoad() {
        super.viewDidLoad()
        sceneView.delegate = self
        // Do any additional setup after loading the view.
    }
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        setConfiguration()
        initRoom()
    }
    func setConfiguration(){
        sceneView.session.run(configuration)
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        sceneView.session.pause()
    }
    func initRoom(){
        let sphereScene = SCNScene(named: "art.scnassets/portal.scn")
        sceneView.scene = sphereScene!
        sceneView.isPlaying = true
        let videoUrl = filepath!
            //Bundle.main.url(forResource: "IMG_4917", withExtension: "mp4", subdirectory: "/var/mobile/Media/DCIM/104APPLE")
        let videoPlayer = AVPlayer(url: videoUrl)
        
        
        //let spriteKitScene = SKScene(size: CGSize(width: sceneView.frame.width, height: sceneView.frame.height))
        let spriteKitScene = SKScene(size: CGSize(width: 1200, height: 1200))
        let videoSpriteKit = SKVideoNode(avPlayer: videoPlayer)
        videoSpriteKit.position = CGPoint(x: spriteKitScene.size.width/2, y: spriteKitScene.size.height/2)
        videoSpriteKit.size = spriteKitScene.size
        videoSpriteKit.yScale = -1.0
        videoSpriteKit.play()
        
        NotificationCenter.default.addObserver(forName: .AVPlayerItemDidPlayToEndTime , object: videoPlayer.currentItem, queue: nil) { (notification) in
            videoPlayer.seek(to: kCMTimeZero)
            videoPlayer.play()
        }
        spriteKitScene.addChild(videoSpriteKit)
//        let node = SCNNode()
//        node.geometry = SCNSphere(radius: 1.5)
//        node.geometry?.firstMaterial?.diffuse.contents = spriteKitScene
//        node.geometry?.firstMaterial?.specular.contents = nil
//        node.geometry?.firstMaterial?.normal.contents = nil
//        node.geometry?.firstMaterial?.emission.contents = nil
//        node.position = SCNVector3(0.5,0.5,0.2)
//        //node.geometry?.firstMaterial?.transparency = 0;
//        node.geometry?.firstMaterial?.isDoubleSided = true
//
//        self.sceneView.scene.rootNode.addChildNode(node)
        
        if let sphereNode = sphereScene?.rootNode.childNode(withName: "ARSphere", recursively: true){
            sphereNode.geometry?.firstMaterial?.diffuse.contents = spriteKitScene
            sphereNode.geometry?.firstMaterial?.isDoubleSided = false
            sphereNode.geometry?.firstMaterial?.cullMode = SCNCullMode.front
            
        }
    }
    @IBAction func btnShowClicked(_ sender: Any) {
        menuView.repositioning(byY: (isMenuUp ? 1 : -1) * 70)
        isMenuUp = !isMenuUp
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

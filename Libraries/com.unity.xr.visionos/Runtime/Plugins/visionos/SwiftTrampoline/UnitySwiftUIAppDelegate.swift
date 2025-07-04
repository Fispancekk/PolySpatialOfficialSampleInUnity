import UIKit
import UnityFramework

public class UnitySwiftUIAppDelegate: NSObject, UIApplicationDelegate {
    var unity: UnityLibrary

    // Pass through quit handler so that it can be set by tests
    @objc var quitHandler: (() -> Void)? {
        get {
            if let appController = UnityFramework.getInstance().appController() {
                return appController.quitHandler
            }
            return nil
        }
        set {
            if let appController = UnityFramework.getInstance().appController() {
                appController.quitHandler = newValue
            }
        }
    }

    override init() {
        let settingsBridge = NSClassFromString("UnityVisionOSSettingsBridge") as? NSObject.Type
        settingsBridge?.perform(Selector(("setSkipPresentToMainScreen:")), with: VisionOSSkipPresent)

        unity = UnityLibrary.getInstance()!
        super.init()
    }

    public func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions:
            [UIApplication.LaunchOptionsKey: Any]? = nil) -> Bool {
        let arguments = CommandLine.arguments
        unity.run(arguments: arguments)
        return true
    }

    public func application(
            _ application: UIApplication,
            configurationForConnecting connectingSceneSession: UISceneSession,
            options: UIScene.ConnectionOptions
        ) -> UISceneConfiguration {
       let configuration = UISceneConfiguration(
           name: nil,
           sessionRole: connectingSceneSession.role)
       configuration.delegateClass = UnitySwiftUISceneDelegate.self
       return configuration
    }
}

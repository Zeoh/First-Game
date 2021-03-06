#include "AppDelegate.h"
#include "MainScene.h"
//#include "GameScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {

}

AppDelegate::~AppDelegate() 
{
}

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if(!glview) {
        glview = GLView::create("PompaDroid");
        director->setOpenGLView(glview);
    }

	//
	//auto Size = director->getWinSize();

	glview->setFrameSize(820,540);
	glview->setDesignResolutionSize(480.0f, 320.0f, ResolutionPolicy::FIXED_HEIGHT);
	std::vector<std::string> searchPath;
	searchPath.push_back("Resources");
	CCFileUtils::getInstance()->setSearchPaths(searchPath);
	director->setContentScaleFactor(384.0f / 320.0f);

    // turn on display FPS
    //director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    // create a scene. it's an autorelease object
    auto scene = HelloWorld::createScene();

    // run
    director->runWithScene(scene);

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}

#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__


class HelloWorld : public cocos2d::Layer
{
	public:
		// there's no 'id' in cpp, so we recommend returning the class instance pointer
		static cocos2d::Scene* createScene();

		// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
		virtual bool init();  
		
		// a selector callback
		void menuCloseCallback(cocos2d::Ref* pSender);
    
		// implement the "static create()" method manually
		CREATE_FUNC(HelloWorld);
		
		bool onTouchBegan( cocos2d::Touch *touch, cocos2d::Event *event) override;
		void onTouchMoved(cocos2d::Touch *touch, cocos2d::Event* event) override;
		void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event* event) override;

//	    void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event) override;
//		void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event) override;

		void onEnter() override;
		void onExit() override;
		
		cocos2d::Sprite* m_ty;
		cocos2d::EventListenerTouchOneByOne* m_touchListener;
//		cocos2d::EventListenerKeyboard*	m_keyboardListener;
};

#endif // __HELLOWORLD_SCENE_H__

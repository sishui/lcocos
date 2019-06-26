local M = {}

local cls = class(M)
cls.CPPCLS = "cocos2d::ui::Slider::EventType"
cls.LUACLS = "ccui.Slider.EventType"
cls.enums [[
    ON_PERCENTAGE_CHANGED
    ON_SLIDEBALL_DOWN
    ON_SLIDEBALL_UP
    ON_SLIDEBALL_CANCEL
]]

local cls = class(M)
cls.CPPCLS = "cocos2d::ui::Slider"
cls.LUACLS = "ccui.Slider"
cls.SUPERCLS = "ccui.Widget"
cls.funcs [[
    static Slider* create()
    void loadBarTexture(const std::string& fileName, Widget::TextureResType resType =  Widget::TextureResType::LOCAL)
    void setScale9Enabled(bool able)
    bool isScale9Enabled()
    void setCapInsets(const Rect &capInsets)
    void setCapInsetsBarRenderer(const Rect &capInsets)
    const Rect& getCapInsetsBarRenderer()
    void setCapInsetProgressBarRenderer(const Rect &capInsets)
    const Rect& getCapInsetsProgressBarRenderer()
    void loadSlidBallTextureNormal(const std::string& normal, Widget::TextureResType resType =  Widget::TextureResType::LOCAL)
    void loadSlidBallTexturePressed(const std::string& pressed, Widget::TextureResType resType =  Widget::TextureResType::LOCAL)
    void loadSlidBallTextureDisabled(const std::string& disabled, Widget::TextureResType resType =  Widget::TextureResType::LOCAL)
    void loadProgressBarTexture(const std::string& fileName,  Widget::TextureResType resType =  Widget::TextureResType::LOCAL)
    void setPercent(int percent)
    int getPercent()
    void setMaxPercent(int percent)
    int getMaxPercent()
    void setZoomScale(float scale)
    float getZoomScale()

    @ref(map protectedChildren) Sprite* getSlidBallNormalRenderer()
    @ref(map protectedChildren) Sprite* getSlidBallPressedRenderer()
    @ref(map protectedChildren) Sprite* getSlidBallDisabledRenderer()
    @ref(map protectedChildren) Node* getSlidBallRenderer()

    ResourceData getBackFile()
    ResourceData getProgressBarFile()
    ResourceData getBallNormalFile()
    ResourceData getBallPressedFile()
    ResourceData getBallDisabledFile()
]]

cls.callback(
    'void addEventListener(@nullable const std::function<void(Ref*,EventType)>& callback)',
    {
        CALLBACK_MAKER = 'olua_makecallbacktag("SliderCallback")',
        CALLBACK_REPLACE = true,
        CALLBACK_MODE = 'OLUA_CALLBACK_TAG_ENDWITH',
    }
)

cls.props [[
    scale9Enabled
    capInsetsBarRenderer
    capInsetsProgressBarRenderer
    percent
    maxPercent
    zoomScale
    slidBallNormalRenderer
    slidBallPressedRenderer
    slidBallDisabledRenderer
    slidBallRenderer
    backFile
    progressBarFile
    ballNormalFile
    ballPressedFile
    ballDisabledFile
]]

return M
//
// generated by tolua
//
#include "xgame/lua-bindings/lua_cocos2d.h"
#include "xgame/xlua.h"
#include "xgame/xruntime.h"
#include "cocos2d.h"
#include "tolua/tolua.hpp"

static int _cocos2d_UserDefault_getBoolForKey1(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);

    bool ret = (bool)self->getBoolForKey(arg1);

    return tolua_push_bool(L, ret);
}

static int _cocos2d_UserDefault_getBoolForKey2(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    bool arg2 = false;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_bool(L, 3, &arg2);

    bool ret = (bool)self->getBoolForKey(arg1, arg2);

    return tolua_push_bool(L, ret);
}

static int _cocos2d_UserDefault_getBoolForKey(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if (tolua_is_string(L, 2)) {
            return _cocos2d_UserDefault_getBoolForKey1(L);
        // }
    }

    if (num_args == 2) {
        // if (tolua_is_string(L, 2) && tolua_is_bool(L, 3)) {
            return _cocos2d_UserDefault_getBoolForKey2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::UserDefault::getBoolForKey' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_UserDefault_getIntegerForKey1(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);

    int ret = (int)self->getIntegerForKey(arg1);

    return tolua_push_int(L, ret);
}

static int _cocos2d_UserDefault_getIntegerForKey2(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    lua_Integer arg2 = 0;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_int(L, 3, &arg2);

    int ret = (int)self->getIntegerForKey(arg1, (int)arg2);

    return tolua_push_int(L, ret);
}

static int _cocos2d_UserDefault_getIntegerForKey(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if (tolua_is_string(L, 2)) {
            return _cocos2d_UserDefault_getIntegerForKey1(L);
        // }
    }

    if (num_args == 2) {
        // if (tolua_is_string(L, 2) && tolua_is_int(L, 3)) {
            return _cocos2d_UserDefault_getIntegerForKey2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::UserDefault::getIntegerForKey' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_UserDefault_getFloatForKey1(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);

    float ret = (float)self->getFloatForKey(arg1);

    return tolua_push_number(L, ret);
}

static int _cocos2d_UserDefault_getFloatForKey2(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    lua_Number arg2 = 0;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_number(L, 3, &arg2);

    float ret = (float)self->getFloatForKey(arg1, (float)arg2);

    return tolua_push_number(L, ret);
}

static int _cocos2d_UserDefault_getFloatForKey(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if (tolua_is_string(L, 2)) {
            return _cocos2d_UserDefault_getFloatForKey1(L);
        // }
    }

    if (num_args == 2) {
        // if (tolua_is_string(L, 2) && tolua_is_number(L, 3)) {
            return _cocos2d_UserDefault_getFloatForKey2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::UserDefault::getFloatForKey' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_UserDefault_getDoubleForKey1(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);

    double ret = (double)self->getDoubleForKey(arg1);

    return tolua_push_number(L, ret);
}

static int _cocos2d_UserDefault_getDoubleForKey2(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    lua_Number arg2 = 0;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_number(L, 3, &arg2);

    double ret = (double)self->getDoubleForKey(arg1, (double)arg2);

    return tolua_push_number(L, ret);
}

static int _cocos2d_UserDefault_getDoubleForKey(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if (tolua_is_string(L, 2)) {
            return _cocos2d_UserDefault_getDoubleForKey1(L);
        // }
    }

    if (num_args == 2) {
        // if (tolua_is_string(L, 2) && tolua_is_number(L, 3)) {
            return _cocos2d_UserDefault_getDoubleForKey2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::UserDefault::getDoubleForKey' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_UserDefault_getStringForKey1(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);

    std::string ret = (std::string)self->getStringForKey(arg1);

    return tolua_push_std_string(L, ret);
}

static int _cocos2d_UserDefault_getStringForKey2(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    std::string arg2;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_std_string(L, 3, &arg2);

    std::string ret = (std::string)self->getStringForKey(arg1, arg2);

    return tolua_push_std_string(L, ret);
}

static int _cocos2d_UserDefault_getStringForKey(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if (tolua_is_string(L, 2)) {
            return _cocos2d_UserDefault_getStringForKey1(L);
        // }
    }

    if (num_args == 2) {
        // if (tolua_is_string(L, 2) && tolua_is_std_string(L, 3)) {
            return _cocos2d_UserDefault_getStringForKey2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::UserDefault::getStringForKey' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_UserDefault_setBoolForKey(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    bool arg2 = false;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_bool(L, 3, &arg2);

    self->setBoolForKey(arg1, arg2);

    return 0;
}

static int _cocos2d_UserDefault_setIntegerForKey(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    lua_Integer arg2 = 0;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_int(L, 3, &arg2);

    self->setIntegerForKey(arg1, (int)arg2);

    return 0;
}

static int _cocos2d_UserDefault_setFloatForKey(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    lua_Number arg2 = 0;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_number(L, 3, &arg2);

    self->setFloatForKey(arg1, (float)arg2);

    return 0;
}

static int _cocos2d_UserDefault_setDoubleForKey(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    lua_Number arg2 = 0;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_number(L, 3, &arg2);

    self->setDoubleForKey(arg1, (double)arg2);

    return 0;
}

static int _cocos2d_UserDefault_setStringForKey(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;
    std::string arg2;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);
    tolua_to_std_string(L, 3, &arg2);

    self->setStringForKey(arg1, arg2);

    return 0;
}

static int _cocos2d_UserDefault_flush(lua_State *L)
{
    lua_settop(L, 1);

    cocos2d::UserDefault *self = nullptr;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");

    self->flush();

    return 0;
}

static int _cocos2d_UserDefault_deleteValueForKey(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::UserDefault *self = nullptr;
    const char *arg1 = nullptr;

    tolua_to_obj(L, 1, (void **)&self, "cc.UserDefault");
    tolua_to_string(L, 2, &arg1);

    self->deleteValueForKey(arg1);

    return 0;
}

static int _cocos2d_UserDefault_getInstance(lua_State *L)
{
    lua_settop(L, 0);

    cocos2d::UserDefault *ret = (cocos2d::UserDefault *)cocos2d::UserDefault::getInstance();

    return tolua_push_obj(L, ret, "cc.UserDefault");
}

static int _cocos2d_UserDefault_getXMLFilePath(lua_State *L)
{
    lua_settop(L, 0);

    const std::string ret = (const std::string)cocos2d::UserDefault::getXMLFilePath();

    return tolua_push_std_string(L, ret);
}

static int _cocos2d_UserDefault_isXMLFileExist(lua_State *L)
{
    lua_settop(L, 0);

    bool ret = (bool)cocos2d::UserDefault::isXMLFileExist();

    return tolua_push_bool(L, ret);
}

static int luaopen_cocos2d_UserDefault(lua_State *L)
{
    toluacls_class(L, "cc.UserDefault", nullptr);
    toluacls_setfunc(L, "getBoolForKey", _cocos2d_UserDefault_getBoolForKey);
    toluacls_setfunc(L, "getIntegerForKey", _cocos2d_UserDefault_getIntegerForKey);
    toluacls_setfunc(L, "getFloatForKey", _cocos2d_UserDefault_getFloatForKey);
    toluacls_setfunc(L, "getDoubleForKey", _cocos2d_UserDefault_getDoubleForKey);
    toluacls_setfunc(L, "getStringForKey", _cocos2d_UserDefault_getStringForKey);
    toluacls_setfunc(L, "setBoolForKey", _cocos2d_UserDefault_setBoolForKey);
    toluacls_setfunc(L, "setIntegerForKey", _cocos2d_UserDefault_setIntegerForKey);
    toluacls_setfunc(L, "setFloatForKey", _cocos2d_UserDefault_setFloatForKey);
    toluacls_setfunc(L, "setDoubleForKey", _cocos2d_UserDefault_setDoubleForKey);
    toluacls_setfunc(L, "setStringForKey", _cocos2d_UserDefault_setStringForKey);
    toluacls_setfunc(L, "flush", _cocos2d_UserDefault_flush);
    toluacls_setfunc(L, "deleteValueForKey", _cocos2d_UserDefault_deleteValueForKey);
    toluacls_setfunc(L, "getInstance", _cocos2d_UserDefault_getInstance);
    toluacls_setfunc(L, "getXMLFilePath", _cocos2d_UserDefault_getXMLFilePath);
    toluacls_setfunc(L, "isXMLFileExist", _cocos2d_UserDefault_isXMLFileExist);
    toluacls_initmetafunc(L);

    toluacls_createclassproxy(L);

    return 1;
}

static int _cocos2d_Ref___gc(lua_State *L)
{
    return xlua_ccobjgc(L);
}

static int _cocos2d_Ref_getReferenceCount(lua_State *L)
{
    lua_settop(L, 1);

    cocos2d::Ref *self = nullptr;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Ref");

    unsigned int ret = (unsigned int)self->getReferenceCount();

    return tolua_push_uint(L, ret);
}

static int luaopen_cocos2d_Ref(lua_State *L)
{
    toluacls_class(L, "cc.Ref", nullptr);
    toluacls_setfunc(L, "__gc", _cocos2d_Ref___gc);
    toluacls_property(L, "referenceCount", _cocos2d_Ref_getReferenceCount, nullptr);
    toluacls_initmetafunc(L);

    toluacls_createclassproxy(L);

    return 1;
}

static int _cocos2d_Director_getInstance(lua_State *L)
{
    lua_settop(L, 0);

    cocos2d::Director *ret = (cocos2d::Director *)cocos2d::Director::getInstance();

    return xlua_push_ccobj(L, ret, "cc.Director");
}

static int _cocos2d_Director_getRunningScene(lua_State *L)
{
    lua_settop(L, 1);

    cocos2d::Director *self = nullptr;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Director");

    cocos2d::Scene *ret = (cocos2d::Scene *)self->getRunningScene();

    return xlua_push_ccobj(L, ret, "cc.Scene");
}

static int luaopen_cocos2d_Director(lua_State *L)
{
    toluacls_class(L, "cc.Director", "cc.Ref");
    toluacls_setfunc(L, "getInstance", _cocos2d_Director_getInstance);
    toluacls_property(L, "runningScene", _cocos2d_Director_getRunningScene, nullptr);
    toluacls_initmetafunc(L);

    toluacls_createclassproxy(L);

    return 1;
}

static int _cocos2d_Node_create(lua_State *L)
{
    lua_settop(L, 0);

    cocos2d::Node *ret = (cocos2d::Node *)cocos2d::Node::create();

    return xlua_push_ccobj(L, ret, "cc.Node");
}

static int _cocos2d_Node_addChild1(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::Node *self = nullptr;
    cocos2d::Node *arg1 = nullptr;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    xlua_to_ccobj(L, 2, (void **)&arg1, "cc.Node");

    self->addChild(arg1);

    return 0;
}

static int _cocos2d_Node_addChild2(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::Node *self = nullptr;
    cocos2d::Node *arg1 = nullptr;
    lua_Integer arg2 = 0;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    xlua_to_ccobj(L, 2, (void **)&arg1, "cc.Node");
    tolua_to_int(L, 3, &arg2);

    self->addChild(arg1, (int)arg2);

    return 0;
}

static int _cocos2d_Node_addChild3(lua_State *L)
{
    lua_settop(L, 4);

    cocos2d::Node *self = nullptr;
    cocos2d::Node *arg1 = nullptr;
    lua_Integer arg2 = 0;
    lua_Integer arg3 = 0;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    xlua_to_ccobj(L, 2, (void **)&arg1, "cc.Node");
    tolua_to_int(L, 3, &arg2);
    tolua_to_int(L, 4, &arg3);

    self->addChild(arg1, (int)arg2, (int)arg3);

    return 0;
}

static int _cocos2d_Node_addChild4(lua_State *L)
{
    lua_settop(L, 4);

    cocos2d::Node *self = nullptr;
    cocos2d::Node *arg1 = nullptr;
    lua_Integer arg2 = 0;
    std::string arg3;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    xlua_to_ccobj(L, 2, (void **)&arg1, "cc.Node");
    tolua_to_int(L, 3, &arg2);
    tolua_to_std_string(L, 4, &arg3);

    self->addChild(arg1, (int)arg2, arg3);

    return 0;
}

static int _cocos2d_Node_addChild(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if (xlua_is_ccobj(L, 2, "cc.Node")) {
            return _cocos2d_Node_addChild1(L);
        // }
    }

    if (num_args == 2) {
        // if (xlua_is_ccobj(L, 2, "cc.Node") && tolua_is_int(L, 3)) {
            return _cocos2d_Node_addChild2(L);
        // }
    }

    if (num_args == 3) {
        if (xlua_is_ccobj(L, 2, "cc.Node") && tolua_is_int(L, 3) && tolua_is_int(L, 4)) {
            return _cocos2d_Node_addChild3(L);
        }

        // if (xlua_is_ccobj(L, 2, "cc.Node") && tolua_is_int(L, 3) && tolua_is_std_string(L, 4)) {
            return _cocos2d_Node_addChild4(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Node::addChild' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Node_getChildByTag(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::Node *self = nullptr;
    lua_Integer arg1 = 0;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    tolua_to_int(L, 2, &arg1);

    cocos2d::Node *ret = (cocos2d::Node *)self->getChildByTag((int)arg1);

    return xlua_push_ccobj(L, ret, "cc.Node");
}

static int _cocos2d_Node_removeFromParent(lua_State *L)
{
    lua_settop(L, 1);

    cocos2d::Node *self = nullptr;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");

    self->removeFromParent();

    return 0;
}

static int _cocos2d_Node_removeFromParentAndCleanup(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::Node *self = nullptr;
    bool arg1 = false;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    tolua_to_bool(L, 2, &arg1);

    self->removeFromParentAndCleanup(arg1);

    return 0;
}

static int _cocos2d_Node_removeChild(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::Node *self = nullptr;
    cocos2d::Node *arg1 = nullptr;
    bool arg2 = false;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    xlua_to_ccobj(L, 2, (void **)&arg1, "cc.Node");
    tolua_opt_bool(L, 3, &arg2, true);

    self->removeChild(arg1, arg2);

    return 0;
}

static int _cocos2d_Node_removeChildByTag(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::Node *self = nullptr;
    lua_Integer arg1 = 0;
    bool arg2 = false;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    tolua_to_int(L, 2, &arg1);
    tolua_opt_bool(L, 3, &arg2, true);

    self->removeChildByTag((int)arg1, arg2);

    return 0;
}

static int _cocos2d_Node_removeChildByName(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::Node *self = nullptr;
    std::string arg1;
    bool arg2 = false;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    tolua_to_std_string(L, 2, &arg1);
    tolua_opt_bool(L, 3, &arg2, true);

    self->removeChildByName(arg1, arg2);

    return 0;
}

static int _cocos2d_Node_removeAllChildren(lua_State *L)
{
    lua_settop(L, 1);

    cocos2d::Node *self = nullptr;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");

    self->removeAllChildren();

    return 0;
}

static int _cocos2d_Node_removeAllChildrenWithCleanup(lua_State *L)
{
    lua_settop(L, 2);

    cocos2d::Node *self = nullptr;
    bool arg1 = false;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    tolua_to_bool(L, 2, &arg1);

    self->removeAllChildrenWithCleanup(arg1);

    return 0;
}

static int _cocos2d_Node_reorderChild(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::Node *self = nullptr;
    cocos2d::Node *arg1 = nullptr;
    lua_Integer arg2 = 0;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    xlua_to_ccobj(L, 2, (void **)&arg1, "cc.Node");
    tolua_to_int(L, 3, &arg2);

    self->reorderChild(arg1, (int)arg2);

    return 0;
}

static int _cocos2d_Node_sortAllChildren(lua_State *L)
{
    lua_settop(L, 1);

    cocos2d::Node *self = nullptr;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");

    self->sortAllChildren();

    return 0;
}

static int _cocos2d_Node_setPosition(lua_State *L)
{
    lua_settop(L, 3);

    cocos2d::Node *self = nullptr;
    lua_Number arg1 = 0;
    lua_Number arg2 = 0;

    xlua_to_ccobj(L, 1, (void **)&self, "cc.Node");
    tolua_to_number(L, 2, &arg1);
    tolua_to_number(L, 3, &arg2);

    self->setPosition((float)arg1, (float)arg2);

    return 0;
}

static int luaopen_cocos2d_Node(lua_State *L)
{
    toluacls_class(L, "cc.Node", "cc.Ref");
    toluacls_setfunc(L, "create", _cocos2d_Node_create);
    toluacls_setfunc(L, "addChild", _cocos2d_Node_addChild);
    toluacls_setfunc(L, "getChildByTag", _cocos2d_Node_getChildByTag);
    toluacls_setfunc(L, "removeFromParent", _cocos2d_Node_removeFromParent);
    toluacls_setfunc(L, "removeFromParentAndCleanup", _cocos2d_Node_removeFromParentAndCleanup);
    toluacls_setfunc(L, "removeChild", _cocos2d_Node_removeChild);
    toluacls_setfunc(L, "removeChildByTag", _cocos2d_Node_removeChildByTag);
    toluacls_setfunc(L, "removeChildByName", _cocos2d_Node_removeChildByName);
    toluacls_setfunc(L, "removeAllChildren", _cocos2d_Node_removeAllChildren);
    toluacls_setfunc(L, "removeAllChildrenWithCleanup", _cocos2d_Node_removeAllChildrenWithCleanup);
    toluacls_setfunc(L, "reorderChild", _cocos2d_Node_reorderChild);
    toluacls_setfunc(L, "sortAllChildren", _cocos2d_Node_sortAllChildren);
    toluacls_setfunc(L, "setPosition", _cocos2d_Node_setPosition);
    toluacls_initmetafunc(L);

    toluacls_createclassproxy(L);

    return 1;
}

static int _cocos2d_Sprite_create(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;

    tolua_to_std_string(L, 1, &arg1);

    cocos2d::Sprite *ret = (cocos2d::Sprite *)cocos2d::Sprite::create(arg1);

    return xlua_push_ccobj(L, ret, "cc.Sprite");
}

static int luaopen_cocos2d_Sprite(lua_State *L)
{
    toluacls_class(L, "cc.Sprite", "cc.Node");
    toluacls_setfunc(L, "create", _cocos2d_Sprite_create);
    toluacls_initmetafunc(L);

    toluacls_createclassproxy(L);

    return 1;
}

static int luaopen_cocos2d_Scene(lua_State *L)
{
    toluacls_class(L, "cc.Scene", "cc.Node");

    toluacls_initmetafunc(L);

    toluacls_createclassproxy(L);

    return 1;
}

int luaopen_cocos2d(lua_State *L)
{
    xlua_require(L, "cc.UserDefault", luaopen_cocos2d_UserDefault);
    xlua_require(L, "cc.Ref", luaopen_cocos2d_Ref);
    xlua_require(L, "cc.Director", luaopen_cocos2d_Director);
    xlua_require(L, "cc.Node", luaopen_cocos2d_Node);
    xlua_require(L, "cc.Sprite", luaopen_cocos2d_Sprite);
    xlua_require(L, "cc.Scene", luaopen_cocos2d_Scene);
    return 0;
}
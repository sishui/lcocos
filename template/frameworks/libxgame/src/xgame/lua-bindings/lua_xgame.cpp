//
// generated by olua
//
#include "xgame/lua-bindings/lua_xgame.h"
#include "xgame/lua-bindings/lua_conv.h"
#include "xgame/lua-bindings/lua_conv_manual.h"
#include "xgame/xfilesystem.h"
#include "xgame/xlua.h"
#include "xgame/xpreferences.h"
#include "xgame/xruntime.h"
#include "xgame/xtimer.h"
#include "olua/olua.hpp"

static int _xgame_runtime_clearStorage(lua_State *L)
{
    lua_settop(L, 0);

    // static void clearStorage()
    xgame::runtime::clearStorage();

    return 0;
}

static int _xgame_runtime_launch(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** scriptPath */

    olua_check_std_string(L, 1, &arg1);

    // static bool launch(const std::string &scriptPath)
    bool ret = (bool)xgame::runtime::launch(arg1);

    return olua_push_bool(L, ret);
}

static int _xgame_runtime_restart(lua_State *L)
{
    lua_settop(L, 0);

    // static bool restart()
    bool ret = (bool)xgame::runtime::restart();

    return olua_push_bool(L, ret);
}

static int _xgame_runtime_isRestarting(lua_State *L)
{
    lua_settop(L, 0);

    // static bool isRestarting()
    bool ret = (bool)xgame::runtime::isRestarting();

    return olua_push_bool(L, ret);
}

static int _xgame_runtime_setAntialias(lua_State *L)
{
    lua_settop(L, 2);

    bool arg1 = false;   /** enabled */
    lua_Unsigned arg2 = 0;   /** numSamples */

    olua_check_bool(L, 1, &arg1);
    olua_check_uint(L, 2, &arg2);

    // static void setAntialias(bool enabled, unsigned int numSamples)
    xgame::runtime::setAntialias(arg1, (unsigned int)arg2);

    return 0;
}

static int _xgame_runtime_isAntialias(lua_State *L)
{
    lua_settop(L, 0);

    // static bool isAntialias()
    bool ret = (bool)xgame::runtime::isAntialias();

    return olua_push_bool(L, ret);
}

static int _xgame_runtime_getNumSamples(lua_State *L)
{
    lua_settop(L, 0);

    // static unsigned int getNumSamples()
    unsigned int ret = (unsigned int)xgame::runtime::getNumSamples();

    return olua_push_uint(L, (lua_Unsigned)ret);
}

static int _xgame_runtime_canOpenURL(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** uri */

    olua_check_std_string(L, 1, &arg1);

    // static bool canOpenURL(const std::string &uri)
    bool ret = (bool)xgame::runtime::canOpenURL(arg1);

    return olua_push_bool(L, ret);
}

static int _xgame_runtime_support(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** api */

    olua_check_std_string(L, 1, &arg1);

    // static bool support(const std::string &api)
    bool ret = (bool)xgame::runtime::support(arg1);

    return olua_push_bool(L, ret);
}

static int _xgame_runtime_printSupport(lua_State *L)
{
    lua_settop(L, 0);

    // static void printSupport()
    xgame::runtime::printSupport();

    return 0;
}

static int _xgame_runtime_disableReport(lua_State *L)
{
    lua_settop(L, 0);

    // static void disableReport()
    xgame::runtime::disableReport();

    return 0;
}

static int _xgame_runtime_setDispatcher(lua_State *L)
{
    int handler = xlua_reffunc(L, 1);
    xgame::runtime::setDispatcher([handler](const std::string &event, const std::string &args) {
        lua_State *L = xlua_cocosthread();
        int top = lua_gettop(L);
        lua_pushcfunction(L, xlua_errorfunc);
        xlua_getref(L, handler);
        if (lua_isfunction(L, -1)) {
            lua_pushstring(L, event.c_str());
            lua_pushstring(L, args.c_str());
            lua_pcall(L, 2, 0, top + 1);
        }
        lua_settop(L, top);
    });
    return 0;
}

static int _xgame_runtime_openURL(lua_State *L)
{
    lua_settop(L, 2);
    int callback = LUA_REFNIL;
    if (lua_isfunction(L, 2)) {
        callback = xlua_reffunc(L, 2);
    }
    xgame::runtime::openURL(luaL_checkstring(L, 1), [callback](bool success) {
        if (callback != LUA_REFNIL) {
            lua_State *L = xlua_cocosthread();
            int top = lua_gettop(L);
            lua_pushcfunction(L, xlua_errorfunc);
            xlua_getref(L, callback);
            if (lua_isfunction(L, -1)) {
                lua_pushboolean(L, success);
                lua_pcall(L, 1, 0, top + 1);
                xlua_unref(L, callback);
            }
            lua_settop(L, top);
        }
    });
    return 0;
}

static int _xgame_runtime_getPackageName(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getPackageName()
    const std::string ret = (const std::string)xgame::runtime::getPackageName();

    return olua_push_std_string(L, ret);
}

static int _xgame_runtime_getVersion(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getVersion()
    const std::string ret = (const std::string)xgame::runtime::getVersion();

    return olua_push_std_string(L, ret);
}

static int _xgame_runtime_getVersionBuild(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getVersionBuild()
    const std::string ret = (const std::string)xgame::runtime::getVersionBuild();

    return olua_push_std_string(L, ret);
}

static int _xgame_runtime_getChannel(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getChannel()
    const std::string ret = (const std::string)xgame::runtime::getChannel();

    return olua_push_std_string(L, ret);
}

static int _xgame_runtime_getOS(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getOS()
    const std::string ret = (const std::string)xgame::runtime::getOS();

    return olua_push_std_string(L, ret);
}

static int _xgame_runtime_getDeviceInfo(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getDeviceInfo()
    const std::string ret = (const std::string)xgame::runtime::getDeviceInfo();

    return olua_push_std_string(L, ret);
}

static int _xgame_runtime_getLogPath(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getLogPath()
    const std::string ret = (const std::string)xgame::runtime::getLogPath();

    return olua_push_std_string(L, ret);
}

static int _xgame_runtime_setLogPath(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** path */

    olua_check_std_string(L, 1, &arg1);

    // static void setLogPath(const std::string &path)
    xgame::runtime::setLogPath(arg1);

    return 0;
}

static int luaopen_xgame_runtime(lua_State *L)
{
    oluacls_class(L, "kernel.runtime", nullptr);
    oluacls_setfunc(L, "clearStorage", _xgame_runtime_clearStorage);
    oluacls_setfunc(L, "launch", _xgame_runtime_launch);
    oluacls_setfunc(L, "restart", _xgame_runtime_restart);
    oluacls_setfunc(L, "isRestarting", _xgame_runtime_isRestarting);
    oluacls_setfunc(L, "setAntialias", _xgame_runtime_setAntialias);
    oluacls_setfunc(L, "isAntialias", _xgame_runtime_isAntialias);
    oluacls_setfunc(L, "getNumSamples", _xgame_runtime_getNumSamples);
    oluacls_setfunc(L, "canOpenURL", _xgame_runtime_canOpenURL);
    oluacls_setfunc(L, "support", _xgame_runtime_support);
    oluacls_setfunc(L, "printSupport", _xgame_runtime_printSupport);
    oluacls_setfunc(L, "disableReport", _xgame_runtime_disableReport);
    oluacls_setfunc(L, "setDispatcher", _xgame_runtime_setDispatcher);
    oluacls_setfunc(L, "openURL", _xgame_runtime_openURL);
    oluacls_property(L, "packageName", _xgame_runtime_getPackageName, nullptr);
    oluacls_property(L, "version", _xgame_runtime_getVersion, nullptr);
    oluacls_property(L, "versionBuild", _xgame_runtime_getVersionBuild, nullptr);
    oluacls_property(L, "channel", _xgame_runtime_getChannel, nullptr);
    oluacls_property(L, "os", _xgame_runtime_getOS, nullptr);
    oluacls_property(L, "deviceInfo", _xgame_runtime_getDeviceInfo, nullptr);
    oluacls_property(L, "logPath", _xgame_runtime_getLogPath, _xgame_runtime_setLogPath);

    olua_registerluatype<xgame::runtime>(L, "kernel.runtime");
    oluacls_createclassproxy(L);

    return 1;
}

static int _xgame_filesystem_shortPath(lua_State *L)
{
    lua_settop(L, 2);

    std::string arg1;       /** path */
    lua_Unsigned arg2 = 0;   /** limit */

    olua_check_std_string(L, 1, &arg1);
    olua_opt_uint(L, 2, &arg2, 60);

    // static const std::string shortPath(const std::string &path, size_t limit = 60)
    const std::string ret = (const std::string)xgame::filesystem::shortPath(arg1, (size_t)arg2);

    return olua_push_std_string(L, ret);
}

static int _xgame_filesystem_createDirectory(lua_State *L)
{
    lua_settop(L, 2);

    std::string arg1;       /** path */
    bool arg2 = false;   /** isFilePath */

    olua_check_std_string(L, 1, &arg1);
    olua_opt_bool(L, 2, &arg2, false);

    // static bool createDirectory(const std::string &path, bool isFilePath = false)
    bool ret = (bool)xgame::filesystem::createDirectory(arg1, arg2);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_remove(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** path */

    olua_check_std_string(L, 1, &arg1);

    // static bool remove(const std::string &path)
    bool ret = (bool)xgame::filesystem::remove(arg1);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_exist(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** path */

    olua_check_std_string(L, 1, &arg1);

    // static bool exist(const std::string &path)
    bool ret = (bool)xgame::filesystem::exist(arg1);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_isFile(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** path */

    olua_check_std_string(L, 1, &arg1);

    // static bool isFile(const std::string &path)
    bool ret = (bool)xgame::filesystem::isFile(arg1);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_isDirectory(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** path */

    olua_check_std_string(L, 1, &arg1);

    // static bool isDirectory(const std::string &path)
    bool ret = (bool)xgame::filesystem::isDirectory(arg1);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_rename(lua_State *L)
{
    lua_settop(L, 2);

    std::string arg1;       /** oldPath */
    std::string arg2;       /** newPath */

    olua_check_std_string(L, 1, &arg1);
    olua_check_std_string(L, 2, &arg2);

    // static bool rename(const std::string &oldPath, const std::string &newPath)
    bool ret = (bool)xgame::filesystem::rename(arg1, arg2);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_copy(lua_State *L)
{
    lua_settop(L, 2);

    std::string arg1;       /** srcPath */
    std::string arg2;       /** destPath */

    olua_check_std_string(L, 1, &arg1);
    olua_check_std_string(L, 2, &arg2);

    // static bool copy(const std::string &srcPath, const std::string &destPath)
    bool ret = (bool)xgame::filesystem::copy(arg1, arg2);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_write(lua_State *L)
{
    lua_settop(L, 3);

    std::string arg1;       /** path */
    const char *arg2 = nullptr;   /** data */
    lua_Unsigned arg3 = 0;   /** len */

    olua_check_std_string(L, 1, &arg1);
    olua_check_string(L, 2, &arg2);
    olua_check_uint(L, 3, &arg3);

    // static bool write(const std::string &path, const char *data, size_t len)
    bool ret = (bool)xgame::filesystem::write(arg1, arg2, (size_t)arg3);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_read(lua_State *L)
{
    lua_settop(L, 1);

    std::string arg1;       /** path */

    olua_check_std_string(L, 1, &arg1);

    // static cocos2d::Data read(const std::string &path)
    cocos2d::Data ret = (cocos2d::Data)xgame::filesystem::read(arg1);

    return manual_luacv_push_cocos2d_Data(L, ret);
}

static int _xgame_filesystem_unzip(lua_State *L)
{
    lua_settop(L, 2);

    std::string arg1;       /** path */
    std::string arg2;       /** dest */

    olua_check_std_string(L, 1, &arg1);
    olua_check_std_string(L, 2, &arg2);

    // static bool unzip(const std::string &path, const std::string &dest)
    bool ret = (bool)xgame::filesystem::unzip(arg1, arg2);

    return olua_push_bool(L, ret);
}

static int _xgame_filesystem_getWritablePath(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getWritablePath()
    const std::string ret = (const std::string)xgame::filesystem::getWritablePath();

    return olua_push_std_string(L, ret);
}

static int _xgame_filesystem_getCacheDirectory(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getCacheDirectory()
    const std::string ret = (const std::string)xgame::filesystem::getCacheDirectory();

    return olua_push_std_string(L, ret);
}

static int _xgame_filesystem_getDocumentDirectory(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getDocumentDirectory()
    const std::string ret = (const std::string)xgame::filesystem::getDocumentDirectory();

    return olua_push_std_string(L, ret);
}

static int _xgame_filesystem_getTmpDirectory(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getTmpDirectory()
    const std::string ret = (const std::string)xgame::filesystem::getTmpDirectory();

    return olua_push_std_string(L, ret);
}

static int _xgame_filesystem_getSDCardDirectory(lua_State *L)
{
    lua_settop(L, 0);

    // static const std::string getSDCardDirectory()
    const std::string ret = (const std::string)xgame::filesystem::getSDCardDirectory();

    return olua_push_std_string(L, ret);
}

static int luaopen_xgame_filesystem(lua_State *L)
{
    oluacls_class(L, "kernel.filesystem", nullptr);
    oluacls_setfunc(L, "shortPath", _xgame_filesystem_shortPath);
    oluacls_setfunc(L, "createDirectory", _xgame_filesystem_createDirectory);
    oluacls_setfunc(L, "remove", _xgame_filesystem_remove);
    oluacls_setfunc(L, "exist", _xgame_filesystem_exist);
    oluacls_setfunc(L, "isFile", _xgame_filesystem_isFile);
    oluacls_setfunc(L, "isDirectory", _xgame_filesystem_isDirectory);
    oluacls_setfunc(L, "rename", _xgame_filesystem_rename);
    oluacls_setfunc(L, "copy", _xgame_filesystem_copy);
    oluacls_setfunc(L, "write", _xgame_filesystem_write);
    oluacls_setfunc(L, "read", _xgame_filesystem_read);
    oluacls_setfunc(L, "unzip", _xgame_filesystem_unzip);
    oluacls_property(L, "writablePath", _xgame_filesystem_getWritablePath, nullptr);
    oluacls_property(L, "cacheDirectory", _xgame_filesystem_getCacheDirectory, nullptr);
    oluacls_property(L, "documentDirectory", _xgame_filesystem_getDocumentDirectory, nullptr);
    oluacls_property(L, "tmpDirectory", _xgame_filesystem_getTmpDirectory, nullptr);
    oluacls_property(L, "sdCardDirectory", _xgame_filesystem_getSDCardDirectory, nullptr);

    olua_registerluatype<xgame::filesystem>(L, "kernel.filesystem");
    oluacls_createclassproxy(L);

    return 1;
}

static int _xgame_preferences_getBoolean(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    bool arg2 = false;   /** defaultValue */

    olua_check_string(L, 1, &arg1);
    olua_opt_bool(L, 2, &arg2, false);

    // static bool getBoolean(const char *key, bool defaultValue = false)
    bool ret = (bool)xgame::preferences::getBoolean(arg1, arg2);

    return olua_push_bool(L, ret);
}

static int _xgame_preferences_setBoolean(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    bool arg2 = false;   /** value */

    olua_check_string(L, 1, &arg1);
    olua_check_bool(L, 2, &arg2);

    // static void setBoolean(const char *key, bool value)
    xgame::preferences::setBoolean(arg1, arg2);

    return 0;
}

static int _xgame_preferences_getFloat(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    lua_Number arg2 = 0;   /** defaultValue */

    olua_check_string(L, 1, &arg1);
    olua_opt_number(L, 2, &arg2, 0);

    // static float getFloat(const char *key, float defaultValue = 0)
    float ret = (float)xgame::preferences::getFloat(arg1, (float)arg2);

    return olua_push_number(L, (lua_Number)ret);
}

static int _xgame_preferences_setFloat(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    lua_Number arg2 = 0;   /** value */

    olua_check_string(L, 1, &arg1);
    olua_check_number(L, 2, &arg2);

    // static void setFloat(const char *key, float value)
    xgame::preferences::setFloat(arg1, (float)arg2);

    return 0;
}

static int _xgame_preferences_getDouble(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    lua_Number arg2 = 0;   /** defaultValue */

    olua_check_string(L, 1, &arg1);
    olua_opt_number(L, 2, &arg2, 0);

    // static double getDouble(const char *key, double defaultValue = 0)
    double ret = (double)xgame::preferences::getDouble(arg1, (double)arg2);

    return olua_push_number(L, (lua_Number)ret);
}

static int _xgame_preferences_setDouble(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    lua_Number arg2 = 0;   /** value */

    olua_check_string(L, 1, &arg1);
    olua_check_number(L, 2, &arg2);

    // static void setDouble(const char *key, double value)
    xgame::preferences::setDouble(arg1, (double)arg2);

    return 0;
}

static int _xgame_preferences_getInteger(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    lua_Integer arg2 = 0;   /** defaultValue */

    olua_check_string(L, 1, &arg1);
    olua_opt_int(L, 2, &arg2, 0);

    // static int getInteger(const char *key, int defaultValue = 0)
    int ret = (int)xgame::preferences::getInteger(arg1, (int)arg2);

    return olua_push_int(L, (lua_Integer)ret);
}

static int _xgame_preferences_setInteger(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    lua_Integer arg2 = 0;   /** value */

    olua_check_string(L, 1, &arg1);
    olua_check_int(L, 2, &arg2);

    // static void setInteger(const char *key, int value)
    xgame::preferences::setInteger(arg1, (int)arg2);

    return 0;
}

static int _xgame_preferences_getString(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    const char *arg2 = nullptr;   /** defaultValue */

    olua_check_string(L, 1, &arg1);
    olua_opt_string(L, 2, &arg2, "");

    // static std::string getString(const char *key, const char *defaultValue = "")
    std::string ret = (std::string)xgame::preferences::getString(arg1, arg2);

    return olua_push_std_string(L, ret);
}

static int _xgame_preferences_setString(lua_State *L)
{
    lua_settop(L, 2);

    const char *arg1 = nullptr;   /** key */
    const char *arg2 = nullptr;   /** value */

    olua_check_string(L, 1, &arg1);
    olua_check_string(L, 2, &arg2);

    // static void setString(const char *key, const char *value)
    xgame::preferences::setString(arg1, arg2);

    return 0;
}

static int _xgame_preferences_deleteKey(lua_State *L)
{
    lua_settop(L, 1);

    const char *arg1 = nullptr;   /** key */

    olua_check_string(L, 1, &arg1);

    // static void deleteKey(const char *key)
    xgame::preferences::deleteKey(arg1);

    return 0;
}

static int _xgame_preferences_flush(lua_State *L)
{
    lua_settop(L, 0);

    // static void flush()
    xgame::preferences::flush();

    return 0;
}

static int luaopen_xgame_preferences(lua_State *L)
{
    oluacls_class(L, "kernel.preferences", nullptr);
    oluacls_setfunc(L, "getBoolean", _xgame_preferences_getBoolean);
    oluacls_setfunc(L, "setBoolean", _xgame_preferences_setBoolean);
    oluacls_setfunc(L, "getFloat", _xgame_preferences_getFloat);
    oluacls_setfunc(L, "setFloat", _xgame_preferences_setFloat);
    oluacls_setfunc(L, "getDouble", _xgame_preferences_getDouble);
    oluacls_setfunc(L, "setDouble", _xgame_preferences_setDouble);
    oluacls_setfunc(L, "getInteger", _xgame_preferences_getInteger);
    oluacls_setfunc(L, "setInteger", _xgame_preferences_setInteger);
    oluacls_setfunc(L, "getString", _xgame_preferences_getString);
    oluacls_setfunc(L, "setString", _xgame_preferences_setString);
    oluacls_setfunc(L, "deleteKey", _xgame_preferences_deleteKey);
    oluacls_setfunc(L, "flush", _xgame_preferences_flush);

    olua_registerluatype<xgame::preferences>(L, "kernel.preferences");
    oluacls_createclassproxy(L);

    return 1;
}

static std::unordered_map<std::string, int> s_timer_tag;

static int _xgame_timer_killDelay(lua_State *L)
{
    lua_settop(L, 1);
    const char *tagstr = luaL_checkstring(L, 1);
    const std::string tag = std::string(tagstr);
    auto it = s_timer_tag.find(tag);
    if (it != s_timer_tag.end()) {
        xlua_unref(L, it->second);
        s_timer_tag.erase(it);
        xgame::timer::killDelay(tag);
    }
    return 0;
}

static int _xgame_timer_delay(lua_State *L)
{
    lua_settop(L, 2);
    float time = (float)luaL_checknumber(L, 1);
    unsigned int callback = xlua_reffunc(L, 2);
    xgame::timer::delay(time, [callback]() {
        lua_State *L = xlua_cocosthread();
        int top = lua_gettop(L);
        lua_pushcfunction(L, xlua_errorfunc);
        xlua_getref(L, callback);
        if (lua_isfunction(L, -1)) {
            lua_pcall(L, 0, 0, top + 1);
            xlua_unref(L, callback);
        }
        lua_settop(L, top);
    });
    return 0;
}

static int _xgame_timer_delayWithTag(lua_State *L)
{
    lua_settop(L, 3);
    size_t len;
    float time = (float)luaL_checknumber(L, 1);
    const char *tagstr = luaL_checklstring(L, 2, &len);
    if (len <= 0) {
        luaL_error(L, "key should not be empty!");
    }
    const std::string tag = std::string(tagstr);
    if (s_timer_tag.find(tag) != s_timer_tag.end()) {
        xlua_unref(L, s_timer_tag[tag]);
    }
    unsigned int callback = xlua_reffunc(L, 3);
    s_timer_tag[tag] = callback;
    xgame::timer::delayWithTag(time, tag, [callback]() {
        lua_State *L = xlua_cocosthread();
        int top = lua_gettop(L);
        lua_pushcfunction(L, xlua_errorfunc);
        xlua_getref(L, callback);
        if (lua_isfunction(L, -1)) {
            lua_pcall(L, 0, 0, top + 1);
            xlua_unref(L, callback);
        }
        lua_settop(L, top);
    });
    return 0;
}

static int _xgame_timer_schedule(lua_State *L)
{
    lua_settop(L, 2);
    float interval = (float)luaL_checknumber(L, 1);
    unsigned int callback = xlua_reffunc(L, 2);
    unsigned int id = xgame::timer::schedule(interval, [callback](float dt) {
        lua_State *L = xlua_cocosthread();
        int top = lua_gettop(L);
        lua_pushcfunction(L, xlua_errorfunc);
        xlua_getref(L, callback);
        if (lua_isfunction(L, -1)) {
            lua_pushnumber(L, dt);
            lua_pcall(L, 1, 0, top + 1);
        }
        lua_settop(L, top);
    });
    lua_pushinteger(L, ((uint64_t)callback << 32) | (uint64_t)id);
    return 1;
}

static int _xgame_timer_unschedule(lua_State *L)
{
    lua_settop(L, 1);
    uint64_t value = luaL_checkinteger(L, 1);
    unsigned int callback = value >> 32;
    unsigned int id = value & 0xFFFFFFFF;
    xlua_unref(L, callback);
    xgame::timer::unschedule(id);
    return 0;
}

static int luaopen_xgame_timer(lua_State *L)
{
    oluacls_class(L, "kernel.timer", nullptr);
    oluacls_setfunc(L, "killDelay", _xgame_timer_killDelay);
    oluacls_setfunc(L, "delay", _xgame_timer_delay);
    oluacls_setfunc(L, "delayWithTag", _xgame_timer_delayWithTag);
    oluacls_setfunc(L, "schedule", _xgame_timer_schedule);
    oluacls_setfunc(L, "unschedule", _xgame_timer_unschedule);

    olua_registerluatype<xgame::timer>(L, "kernel.timer");
    oluacls_createclassproxy(L);

    return 1;
}

static int _xgame_window_visibleBounds(lua_State *L)
{
    auto rect = cocos2d::Director::getInstance()->getOpenGLView()->getVisibleRect();
    lua_pushinteger(L, rect.getMinX());
    lua_pushinteger(L, rect.getMaxX());
    lua_pushinteger(L, rect.getMaxY());
    lua_pushinteger(L, rect.getMinY());
    return 4;
}


static int _xgame_window_getDesignSize(lua_State *L)
{
    auto size = cocos2d::Director::getInstance()->getOpenGLView()->getDesignResolutionSize();
    lua_pushnumber(L, size.width);
    lua_pushnumber(L, size.height);
    return 2;
}

static int _xgame_window_setDesignSize(lua_State *L)
{
    lua_settop(L, 3);
    cocos2d::Director::getInstance()->getOpenGLView()->setDesignResolutionSize(
        (float)luaL_checknumber(L, 1), (float)luaL_checknumber(L, 2),
        (ResolutionPolicy)luaL_checkinteger(L, 3));
    return 0;
}

static int _xgame_window_convertToCameraSpace(lua_State *L)
{
    cocos2d::Vec2 pt = cocos2d::Vec2(luaL_checknumber(L, 1), luaL_checknumber(L, 2));

    auto director = cocos2d::Director::getInstance();
    cocos2d::Mat4 w2l = director->getRunningScene()->getWorldToNodeTransform();
    cocos2d::Rect rect;
    rect.size = director->getOpenGLView()->getDesignResolutionSize();
    auto camera = director->getRunningScene()->getDefaultCamera();
    cocos2d::Vec3 Pn(pt.x, pt.y, -1), Pf(pt.x, pt.y, 1);
    Pn = camera->unprojectGL(Pn);
    Pf = camera->unprojectGL(Pf);

    //  then convert Pn and Pf to node space
    w2l.transformPoint(&Pn);
    w2l.transformPoint(&Pf);

    // Pn and Pf define a line Q(t) = D + t * E which D = Pn
    auto E = Pf - Pn;

    // second, get three points which define content plane
    //  these points define a plane P(u, w) = A + uB + wC
    cocos2d::Vec3 A = cocos2d::Vec3(rect.origin.x, rect.origin.y, 0);
    cocos2d::Vec3 B(rect.origin.x + rect.size.width, rect.origin.y, 0);
    cocos2d::Vec3 C(rect.origin.x, rect.origin.y + rect.size.height, 0);
    B = B - A;
    C = C - A;

    //  the line Q(t) intercept with plane P(u, w)
    //  calculate the intercept point P = Q(t)
    //      (BxC).A - (BxC).D
    //  t = -----------------
    //          (BxC).E
    cocos2d::Vec3 BxC;
    cocos2d::Vec3::cross(B, C, &BxC);
    auto BxCdotE = BxC.dot(E);
    auto t = (BxC.dot(A) - BxC.dot(Pn)) / BxCdotE;
    cocos2d::Vec3 P = Pn + t * E;

    lua_pushnumber(L, P.x);
    lua_pushnumber(L, P.y);

    return 2;
}

static int luaopen_xgame_window(lua_State *L)
{
    oluacls_class(L, "kernel.window", nullptr);
    oluacls_setfunc(L, "visibleBounds", _xgame_window_visibleBounds);
    oluacls_setfunc(L, "getDesignSize", _xgame_window_getDesignSize);
    oluacls_setfunc(L, "setDesignSize", _xgame_window_setDesignSize);
    oluacls_setfunc(L, "convertToCameraSpace", _xgame_window_convertToCameraSpace);

    oluacls_createclassproxy(L);

    return 1;
}

int luaopen_xgame(lua_State *L)
{
    xlua_require(L, "kernel.runtime", luaopen_xgame_runtime);
    xlua_require(L, "kernel.filesystem", luaopen_xgame_filesystem);
    xlua_require(L, "kernel.preferences", luaopen_xgame_preferences);
    xlua_require(L, "kernel.timer", luaopen_xgame_timer);
    xlua_require(L, "kernel.window", luaopen_xgame_window);
    return 0;
}

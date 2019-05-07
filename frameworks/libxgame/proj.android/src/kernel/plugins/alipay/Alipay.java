package kernel.plugins.alipay;

import com.alipay.sdk.app.PayTask;

import org.cocos2dx.lib.Cocos2dxActivity;

import kernel.AppContext;
import kernel.LuaJ;

public class Alipay {
    public static void pay(final String order, final int handler) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                AppContext context = (AppContext) Cocos2dxActivity.getContext();
                PayTask payTask = new PayTask(context);
                final String resultstr = payTask.pay(order);

                AlipayResult result = new AlipayResult(resultstr);
                LuaJ.invokeOnce(handler, AlipayUtil.appendVerifyStatus(result, false));
            }
        }).start();
    }
}

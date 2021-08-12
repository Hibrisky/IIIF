package com.EHan.IIIFv1

import android.app.Application
import com.kakao.sdk.common.KakaoSdk
import com.kakao.sdk.common.util.Utility

class GlobalApplication  : Application() {
    override fun onCreate()
    {
        super.onCreate()
        KakaoSdk.init(this,"2235f774529ce3fd08b140c270dce5b8")

        var keyHash = Utility.getKeyHash(this)
        println("Å° ÇØ½¬ : &keyHash")
    }
}
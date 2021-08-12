package com.EHan.IIIFv1

import com.kakao.sdk.user.UserApiClient
import com.kakao.sdk.auth.model.OAuthToken
import com.unity3d.player.UnityPlayer


class UKakao {
    fun KakaoLogin(){
        val callback: (OAuthToken?,Throwable?) -> Unit = {token, error ->
            if(error != null){
                println("로그인 실패 : $error")
            }
            else if(token != null) {
                println("로그인 성공 : ${token.accessToken}")
            }
        }

        //카카오 톡이 설치되어있으면 카카오톡으로 로그인, 아니면 카카오계정로그인
        if(UserApiClient.instance.isKakaoTalkLoginAvailable(UnityPlayer.currentActivity)){
            UserApiClient.instance.loginWithKakaoTalk(UnityPlayer.currentActivity,
                callback = callback
            )
        }
        else{
            UserApiClient.instance.loginWithKakaoAccount(
                UnityPlayer.currentActivity,
                callback = callback
            )
        }




    }
}
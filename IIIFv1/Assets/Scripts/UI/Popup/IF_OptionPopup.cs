using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IF_OptionPopup : MonoBehaviour
{
    public Button Btn_Close_1;
    public Text Txt_Title;

    public Text Txt_Bgm;
    public Slider Sli_Bgm;
    public Toggle Tog_BgmMute;
    public Text Txt_BgmValue;
    public Text Txt_Mute_1;

    public Text Txt_Eff;
    public Slider Sli_Eff;
    public Toggle Tog_EffMute;
    public Text Txt_EffValue;
    public Text Txt_Mute_2;

    public Text Txt_Vibrate;
    public IF_CustomToggle Tog_VibrateOnOff;

    public Button Btn_Close_2;
    public Text Txt_Close_2;
    public Button Btn_Apply;
    public Text Txt_Apply;

    // Start is called before the first frame update
    void Start()
    {
        Btn_Close_1.onClick.AddListener(OnClick_Close);
        Btn_Close_2.onClick.AddListener(OnClick_Close);
        Btn_Apply.onClick.AddListener(OnClick_Apply);


        if(Sli_Bgm != null)
            Sli_Bgm.value = AudioManager._Instance.GetBgmVolume();

        if (Sli_Eff != null)
            Sli_Eff.value = AudioManager._Instance.GetEffSoundVolume();
    }

    // Update is called once per frame
    void Update()
    {
        //================================================SoundControl
        //업뎃에서 돌리지말고 다른쪽 생각해보자.
        Bgm_Control();
        EffSound_Control();
        Bgm_Mute();
        EffSound_Mute();
        //================================================SoundControl
    }

    void OnClick_Close()
    {
        UIManager._Instance.CloseUIPopup(this.gameObject, 6);
    }

    void OnClick_Apply()
    {
        UIManager._Instance.CloseUIPopup(this.gameObject, 6);
        //적용..
    }

    void Bgm_Mute()
    {
        if (Tog_BgmMute.isOn)
            AudioManager._Instance.BgmMute(true);
        else
            AudioManager._Instance.BgmMute(false);
    }

    void EffSound_Mute()
    {
        if (Tog_EffMute.isOn)
            AudioManager._Instance.EffectSoundMute(true);
        else
            AudioManager._Instance.EffectSoundMute(false);
    }

    void Bgm_Control()
    {
        AudioManager._Instance.BGM_VolumeControl(Sli_Bgm.value);
        Txt_BgmValue.text = string.Format("{0:N0}", Sli_Bgm.value);
    }

    void EffSound_Control()
    {
        AudioManager._Instance.EffectSound_VolumeControl(Sli_Eff.value);
        Txt_EffValue.text = string.Format("{0:N0}", Sli_Eff.value);
    }
}

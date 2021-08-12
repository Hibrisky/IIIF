using System.Collections;
using UnityEngine;

[System.Serializable]
public class Bgm
{
    public AudioSource _bgmSound;
    public int _index = 0;
    public bool _isPlay = false;
}

[System.Serializable]
public class EffectSound
{
    public AudioSource _effSound;
    public int _index = 0;
}



public class AudioManager : MonoBehaviour
{
    public static AudioManager _Instance;

    public Bgm[] m_BgmList;
    public EffectSound[] m_EffectSoundList;

    public float m_BgmVolume = 100.0f;
    public float m_EffVolume = 100.0f;

    public float GetBgmVolume() { return m_BgmVolume; }
    public float GetEffSoundVolume() { return m_EffVolume; }

    void Awake()
    {
        _Instance = this;  
    }




    private void Start()
    {
        BGM_VolumeControl(m_BgmVolume);
        EffectSound_VolumeControl(m_EffVolume);
    }

    public void BGM_Play(int _soundID)//반복 재생?
    {
        StartCoroutine(Play_BGM(_soundID));
    }

    public void EffectSound_Play(int _effectSoundID)
    {
        StartCoroutine(Play_EffectSound(_effectSoundID));
    }

    public void BGM_Stop()
    {
        
    }

    IEnumerator Play_BGM(int _soundID)
    {
        int bgm_count = m_BgmList.Length;
        for (int i = 0; i < bgm_count; i++)
        {
            if (m_BgmList[i]._index == _soundID)
            {
                m_BgmList[i]._bgmSound.loop = true;
                m_BgmList[i]._bgmSound.Play();
                break;
            }
        }
        yield return null;
    }

    IEnumerator Play_EffectSound(int _effectSoundID)
    {
        int eff_count = m_EffectSoundList.Length;
        for (int i = 0; i < eff_count; i++)
        {
            if (m_EffectSoundList[i]._index == _effectSoundID)
            {
                m_EffectSoundList[i]._effSound.Play();
                break;
            }
        }
        yield return null;
    }

    #region 음소거
    public void BgmMute(bool isOn)
    {
        int bgm_count = m_BgmList.Length;
        for (int i = 0; i < bgm_count; i++)
        {
            m_BgmList[i]._bgmSound.mute = isOn;
        }
    }

    public void EffectSoundMute(bool isOn)
    {
        int eff_count = m_EffectSoundList.Length;
        for (int i = 0; i < eff_count; i++)
        {
            m_EffectSoundList[i]._effSound.mute = isOn;
        }
    }
    #endregion


    #region 음량 조절
    public void BGM_VolumeControl(float value)
    {
        m_BgmVolume = value;
        int bgm_count = m_BgmList.Length;
        for (int i = 0; i < bgm_count; i++)
        {
            m_BgmList[i]._bgmSound.volume = value * 0.01f;
        }
    }

    public void EffectSound_VolumeControl(float value)
    {
        m_EffVolume = value;
        int eff_count = m_EffectSoundList.Length;
        for (int i = 0; i < eff_count; i++)
        {
            m_EffectSoundList[i]._effSound.volume = value * 0.01f;
        }
    }
    #endregion
}

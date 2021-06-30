using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IF_Gyro : MonoBehaviour
{
    static bool gyroInitialized = false;

    public static bool HasGyroscope//�� ���� ������ �ϴ°� ���ϴ°�.
    {
        get
        {
            return SystemInfo.supportsGyroscope;
        }
    }

    public static Quaternion Get()
    {
        if (!gyroInitialized)
        {
            InitGyro();
        }

        return HasGyroscope ? ReadGyroscopeRotaion() : Quaternion.identity;
    }
    private static void InitGyro()
    {
        if (HasGyroscope)
        {
            Debug.Log("This Device Support GyroSensor!");

            Input.gyro.enabled = true;
            Input.gyro.updateInterval = 0.0167f;//����� ���� ������ �����ϴ� �ֱ�. 0.1 or 0.01 or 10�� �ַ� ����Ѵ� ��µ� ��Ȯ�� ������ Ȯ�� ��...
        }
        else
            Debug.Log("This Device NotSupport GyroSensor!");

        gyroInitialized = true;
    }

    private static Quaternion ReadGyroscopeRotaion()
    {
        Quaternion Gyro = Quaternion.identity;
        //Gyro.x = -Input.gyro.attitude.x;
        //return new Quaternion(-1, 0, 0, 0.5f) * Gyro * new Quaternion(1, 0, 0, 0);

        //Quaternion Gyro = Quaternion.identity;
        Gyro.x = Input.gyro.attitude.x;
        Gyro.y = Input.gyro.attitude.y;
        Gyro.z = Input.gyro.attitude.z;
        Gyro.w = Input.gyro.attitude.w;

        return Gyro;
        //return new Quaternion(-1, 0.5f, -3.25f, 0.5f) * Gyro * new Quaternion(-1, 0, 0, 0);
        //return new Quaternion(0.5f, 0.5f, -0.5f, 0.5f) *
        //    Gyro * new Quaternion(0, 0, 1, 0);
    }
}

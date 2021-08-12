using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class IF_GPS : MonoBehaviour
{
    /**
     * �� �������� �Ÿ� ���
     *
     * @param lat1 ���� 1 ����
     * @param lon1 ���� 1 �浵
     * @param lat2 ���� 2 ����
     * @param lon2 ���� 2 �浵
     * @param unit �Ÿ� ǥ�����
     * @return
     */
    static double distance(double lat1, double lon1, double lat2, double lon2, DistUnit unit)//���� ��ǥ�� ��ǥ ��ǥ �� �Ÿ�
    {

        double theta = lon1 - lon2;
        double dist = Math.Sin(deg2rad(lat1)) * Math.Sin(deg2rad(lat2)) + Math.Cos(deg2rad(lat1)) * Math.Cos(deg2rad(lat2)) * Math.Cos(deg2rad(theta));

        dist = Math.Acos(dist);
        dist = rad2deg(dist);
        dist = dist * 60 * 1.1515;

        if (unit == DistUnit.kilometer)
        {
            dist = dist * 1.609344;
        }
        else if (unit == DistUnit.meter)
        {
            dist = dist * 1609.344;
        }

        return (dist);
    }

    static double deg2rad(double deg)
    {
        return (deg * Math.PI / 180.0);
    }

    static double rad2deg(double rad)
    {
        return (rad * 180 / Math.PI);
    }

    static Double degToRad = Math.PI / 180.0;

    static public Double initial(Double lat1, Double long1, Double lat2, Double long2)
    {
        return (_bearing(lat1, long1, lat2, long2) + 360.0) % 360;
    }


    static public Double final(Double lat1, Double long1, Double lat2, Double long2)//���� ��ǥ�� ��ǥ ��ǥ �� ����.
    {
        return (_bearing(lat2, long2, lat1, long1) + 180.0) % 360;
    }


    static private Double _bearing(Double lat1, Double long1, Double lat2, Double long2)
    {
        Double phi1 = lat1 * degToRad;
        Double phi2 = lat2 * degToRad;
        Double lam1 = long1 * degToRad;
        Double lam2 = long2 * degToRad;

        return Math.Atan2(Math.Sin(lam2 - lam1) * Math.Cos(phi2),
            Math.Cos(phi1) * Math.Sin(phi2) - Math.Sin(phi1) * Math.Cos(phi2) * Math.Cos(lam2 - lam1)
        ) * 180 / Math.PI;
    }


    enum DistUnit
    {
        kilometer,
        meter
    }

}

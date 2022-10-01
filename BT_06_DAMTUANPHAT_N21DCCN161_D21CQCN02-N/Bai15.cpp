#include <iostream>

using namespace std;

struct PHANSO
{
    int tu;
    int mau;
};

void nhap(PHANSO *ps, int a, int b)
{
    ps->tu = a;
    ps->mau = b;
}

void xuat(PHANSO ps)
{
    if (ps.mau == 1)
    {
        cout << ps.tu;
    }
    else
    {
        cout << ps.tu << "/" << ps.mau;
    }
}

PHANSO rutGon(PHANSO *ps)
{
    if (ps->tu == 1)
    {
        return *ps;
    }
    else if (ps->mau % ps->tu == 0)
    {
        PHANSO c;
        int boi = ps->mau / ps->tu;
        c.tu = ps->tu / boi;
        c.mau = ps->mau / boi;
        return c;
    }
    else if (ps->tu % ps->mau == 0)
    {
        PHANSO c;
        int boi = ps->tu / ps->mau;
        c.tu = boi;
        c.mau = 1;
        return c;
    }
    else
    {
        return *ps;
    }
}

bool isPositive(PHANSO ps)
{
    if (ps.tu < 0 && ps.mau < 0 || ps.tu >= 0 && ps.mau > 0)
    {
        return true;
    }
    return false;
}

void quyDong(PHANSO *a, PHANSO *b)
{
    if (a->mau == b->mau)
    {
        return;
    }
    else
    {
        PHANSO c, d;
        c.mau = a->mau * b->mau;
        d.mau = c.mau;
        c.tu = a->tu * b->mau;
        d.tu = b->tu * a->mau;
        *a = c;
        *b = d;
    }
}

int soSanh(PHANSO a, PHANSO b)
{
    if (a.mau == b.mau)
    {
        if (a.tu > b.tu)
        {
            return 1;
        }
        else if (a.tu < b.tu)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        quyDong(&a, &b);
        if (a.mau == b.mau)
        {
            if (a.tu > b.tu)
            {
                return 1;
            }
            else if (a.tu < b.tu)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
    }
    return 0;
}

void ascSort(PHANSO ps[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (soSanh(ps[i], ps[j]) == 1)
            {
                PHANSO temp = ps[i];
                ps[i] = ps[j];
                ps[j] = temp;
            }
        }
    }
}

void descSort(PHANSO ps[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (soSanh(ps[i], ps[j]) == 0)
            {
                PHANSO temp = ps[i];
                ps[i] = ps[j];
                ps[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Nhap so phan so co trong mang: ";
    cin >> n;
    PHANSO arr[n];

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "Nhap tu va mau so cua phan so thu " << i + 1 << " : ";
        cin >> a >> b;
        nhap(&arr[i], a, b);
    }

    cout << "Sau khi rut gon: " << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rutGon(&arr[i]);
        xuat(arr[i]);
        cout << endl;
    }

    int countPositive = 0;
    int countNegative = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPositive(arr[i]))
        {
            countPositive++;
        }
        else
        {
            countNegative++;
        }
    }

    if (countPositive)
    {
        cout << endl
             << "So luong so duong co trong mang: " << countPositive << endl;
    }
    else
    {
        cout << endl
             << "Khong co so duong nao trong mang." << endl;
    }
    if (countNegative)
    {
        cout << endl
             << "So luong so am co trong mang: " << countNegative << endl;
    }
    else
    {
        cout << endl
             << "Khong co so am nao trong mang." << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (isPositive(arr[i]))
        {
            cout << endl
                 << "So duong dau tien trong mang: ";
            xuat(arr[i]);
            cout << endl;
            break;
        }
    }

    cout << endl
         << "Sau khi sap xep tang dan: " << endl;
    ascSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        xuat(arr[i]);
        cout << "\t";
    }

    cout << endl
         << "Sau khi sap xep giam dan: " << endl;
    descSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        xuat(arr[i]);
        cout << "\t";
    }
    return 0;
}
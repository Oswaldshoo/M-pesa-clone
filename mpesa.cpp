#include <iostream>
using namespace std;

int charges(float m)
{
    float n; 
    if (m <= 5000)
    {
        n = m + 300; 
    }

    else if (m <= 10000)
    {
        n = m + 800;
    }
    else if (m <= 20000)
    {
        n = m + 1500;
    }
    else if (m <= 50000)
    {
        n = m + 3000;
    }
    else if (m <= 100000)
    {
        n = m + 4000;
    }
    else if (m <= 150000)
    {
        n = m + 5000;
    }
    else
    {
        cout << "error" << endl;
    }
    return n;
}

int main()
{

    int no, no1, no3, no4, i, last, x, x1, x2, x3, y, y1, y2, y3;
    int pin = 1515;
    float no2, la;
    float balance = 100000;
    float tax, ma;
    // charges
    // int k = 3000;

    // cout<<charges(k);
    // loop for entire program

    for (i = 0; i < 10000; i++)
    {

        cout << "\nWelcome To M-pesa (Balance Tsh " << balance << "/=)" << endl;
        cout << "1. Tuma Pesa" << endl;
        cout << "2. Toa Pesa" << endl;
        cout << "3. Lipa Bill" << endl;
        cout << "4. Nunua Salio" << endl;

        cin >> no;
        // check for incorrect user input
        if (no != 1)
        {
            if (no != 2)
            {
                if (no != 3)
                {
                    if (no != 4)
                    {
                        cout << "\nNamba uliongiza sio sahihi" << endl;
                    }
                }
            }
        }

        switch (no)
        {
        case 1: // kutoa pesa
            cout << "\nKutuma Pesa" << endl;
            cout << "Weka Namba ya Simu (07******)" << endl;
            cin >> no1;
            cout << "\nWeka Kiasi" << endl;
            cin >> no2;

            cout << "\nIngiza Namba ya Siri" << endl;
            cin >> no3;

            if (pin == no3)
            {
                cout << "\nBonyeza 1 Kuthibitisha au 2 kubatilisha kutuma Tsh " << no2 << "/= Kwenda Namba 0" << no1 << endl;
                cin >> no4;
                switch (no4)
                {
                case 1:

                    tax = charges(no2);
                    ma = tax - no2;
                    balance = balance - tax;
                    if (balance < 0)
                    {
                        cout << "\n Salio lako halitoshi tafadhali ongeza salio" << endl;
                        balance = balance + tax;
                        break;
                    }

                    else
                    {
                        cout << "\nBIXTEV16HH Imethibitishwa Tsh " << no2 << "/= imetumwa kwenda Namba 0" << no1 << ". Makato Tsh " << ma << "/=. Salio Lako Jipya ni Tsh " << balance << "/=." << endl;
                        cout << "Asante Kwa Kutumia Vodacom. #Yajayo Yanafurahisha! " << endl;
                    }

                    break;
                case 2:
                    cout << "Umebatilisha Muamala" << endl;
                    break;

                default:
                    cout << "Namba uliongiza sio sahihi" << endl;
                    break;
                }
            }
            else
            {
                while (no3 != pin)
                {
                    cout << "\nNamba Ya Siri Sio Sahihi!" << endl;
                    cout << "\nIngiza Namba ya Siri" << endl;
                    cin >> no3;
                    if (pin == no3)
                    {
                        cout << "\nBonyeza 1 Kuthibitisha au 2 kubatilisha kutuma Tsh " << no2 << "/= Kwenda Namba 0" << no1 << endl;
                        cin >> no4;
                        switch (no4)
                        {
                        case 1:
                            tax = charges(no2);
                            ma = tax - no2;
                            balance = balance - tax;
                            if (balance < 0)
                            {
                                cout << "\n Salio lako halitoshi tafadhali ongeza salio" << endl;
                                balance = balance + tax;
                                break;
                            }

                            else
                            {
                                cout << "\nBIXTEV16HH Imethibitishwa Tsh " << no2 << "/= imetumwa kwenda Namba 0" << no1 << ". Makato Tsh " << ma << "/=. Salio Lako Jipya ni Tsh " << balance << "/=." << endl;
                                cout << "Asante Kwa Kutumia Vodacom. #Yajayo Yanafurahisha! " << endl;
                            }
                            break;
                        case 2:
                            cout << "Umebatilisha Muamala" << endl;
                            break;

                        default:
                            cout << "Namba uliongiza sio sahihi" << endl;
                            break;
                        }
                    }
                }
            }

            break;
        case 2:
            cout << "\nKutoa Pesa" << endl;
            cout << "Ingiza Namba ya Wakala" << endl;
            cin >> x;
            cout << "\nWeka Kiasi" << endl;
            cin >> no2;
            cout << "\nIngiza Namba ya Siri" << endl;
            cin >> x2;
            if (pin == x2)
            {
                cout << "\nBonyeza 1 Kuthibitisha au 2 kubatilisha kutoa Tsh " << no2 << " Kwa Wakala " << x << endl;
                cin >> no4;
                switch (no4)
                {
                case 1:
                    tax = charges(no2);
                    ma = tax - no2;
                    balance = balance - tax;
                    if (balance < 0)
                    {
                        cout << "\n Salio lako halitoshi tafadhali ongeza salio" << endl;
                        balance = balance + tax;
                        break;
                    }

                    else
                    {
                        cout << "BIXTEV16HH Imethibitishwa Tsh " << no2 << "/= imetumwa kwenda Wakala Namba " << x << ". Jumla Makato Tsh " << ma << "/=. Salio Lako Jipya ni Tsh " << balance << "/=." << endl;
                        cout << ". Asante Kwa Kutumia Vodacom. #Yajayo Yanafurahisha! " << endl;
                    }
                    break;
                case 2:
                    cout << "Umebatilisha Muamala" << endl;
                    break;

                default:
                    cout << "Namba uliongiza sio sahihi" << endl;
                    break;
                }
            }
            else
            {
                while (no3 != pin)
                {
                    cout << "\nNamba Ya Siri Sio Sahihi!" << endl;
                    cout << "\nIngiza Namba ya Siri" << endl;
                    cin >> no3;
                    if (pin == no3)
                    {
                        cout << "\nBonyeza 1 Kuthibitisha au 2 kubatilisha kutoa Tsh " << no2 << " Kwa Wakala " << x << endl;
                        cin >> no4;
                        switch (no4)
                        {
                        case 1:
                            tax = charges(no2);
                            ma = tax - no2;
                            balance = balance - tax;
                            if (balance < 0)
                            {
                                cout << "\n Salio lako halitoshi tafadhali ongeza salio" << endl;
                                balance = balance + tax;
                                break;
                            }

                            else
                            {
                                cout << "BIXTEV16HH Imethibitishwa Tsh " << no2 << "/= imetumwa kwenda Wakala Namba " << x << ". Jumla Makato Tsh " << ma << "/=. Salio Lako Jipya ni Tsh " << balance << "/=." << endl;
                                cout << ". Asante Kwa Kutumia Vodacom. #Yajayo Yanafurahisha! " << endl;
                            }
                            break;
                        case 2:
                            cout << "Umebatilisha Muamala" << endl;
                            break;

                        default:
                            cout << "Namba uliongiza sio sahihi" << endl;
                            break;
                        }
                    }
                }
            }

            break;
        case 3:
            cout << "\nKulipa Bill" << endl;
            cout << "\nIngiza Namba Ya Kampuni:" << endl;
            cin >> y;
            cout << "\nIngiza Kumbukumbu Namba:" << endl;
            cin >> y2;
            cout << "\nWeka Kiasi" << endl;
            cin >> no2;
            cout << "\nIngiza Namba ya Siri" << endl;
            cin >> x2;

            if (pin == x2)
            {
                cout << "\nBonyeza 1 Kuthibitisha au 2 kubatilisha Kulipa Tsh " << no2 << "/= Kwenda Namba ya Kampuni " << y << " Kumbukumbu Namba " << y2 << "." << endl;
                cin >> no4;
                switch (no4)
                {
                case 1:
                    balance = balance - no2;
                    if (balance < 0)
                    {
                        cout << "\n Salio lako halitoshi tafadhali ongeza salio" << endl;
                        balance = balance + no2;
                        break;
                    }

                    else
                    {
                        cout << "BIXTEV16HH Imethibitishwa Tsh " << no2 << "/= imelipwa kwenda Namba Ya Kampuni " << y << endl;
                        cout << " Kumbukumbu Namba " << y2 << ". Salio Lako Jipya ni Tsh " << balance << "/=." << endl;
                        cout << ". Asante Kwa Kutumia Vodacom. #Yajayo Yanafurahisha! " << endl;
                    }
                    break;
                case 2:
                    cout << "Umebatilisha Muamala" << endl;
                    break;

                default:
                    cout << "Namba uliongiza sio sahihi" << endl;
                    break;
                }
            }
            else
            {
                while (no3 != pin)
                {
                    cout << "\nNamba Ya Siri Sio Sahihi!" << endl;
                    cout << "\nIngiza Namba ya Siri" << endl;
                    cin >> no3;
                    if (pin == no3)
                    {
                        cout << "\nBonyeza 1 Kuthibitisha au 2 kubatilisha Kulipa Tsh " << no2 << "/= Kwenda Namba ya Kampuni " << y << " Kumbukumbu Namba " << y2 << "." << endl;
                        cin >> no4;
                        switch (no4)
                        {
                        case 1:
                            balance = balance - no2;
                            if (balance < 0)
                            {
                                cout << "\n Salio lako halitoshi tafadhali ongeza salio" << endl;
                                balance = balance + no2;
                                break;
                            }

                            else
                            {
                                cout << "BIXTEV16HH Imethibitishwa Tsh " << no2 << "/= imelipwa kwenda Namba Ya Kampuni " << y << endl;
                                cout << " Kumbukumbu Namba " << y2 << ". Salio Lako Jipya ni Tsh " << balance << "/=." << endl;
                                cout << ". Asante Kwa Kutumia Vodacom. #Yajayo Yanafurahisha! " << endl;
                            }
                            break;
                        case 2:
                            cout << "Umebatilisha Muamala" << endl;
                            break;

                        default:
                            cout << "Namba uliongiza sio sahihi" << endl;
                            break;
                        }
                    }
                }
            }

            break;
        default:
            break;
        }

        /*if (no4 == 1)
        {
            balance = balance - no2;
        }*/

        cout << "\nUnataka kufanya Muamala mwingine?" << endl;
        cout << "1. Ndio" << endl;
        cout << "2. Hapana" << endl;
        cin >> y3;

        if (y3 == 1)
        {
            continue;
            ;
        }
        else if (y3 == 2)
        {
            break;
        }

        else
        {
            cout << "Chaguo sio sahihi" << endl;
            break;
        }
    }
    cout << "Asante Kwa Kuchagua Vodacom!" << endl
         << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int input;
    float InrToUsd = 0.013;
    float USDtoInr = 74.85;
    float InrToArs = 0.98;
    float ArsToInr = 1.02;
    float InrToAud = 0.019;
    float AudToInR = 53.69;
    float InrToBtc = 0.0000011;
    float BtcToInr = 888712.43;
    float InrToCad = 0.018;
    float CadToInr = 56.53;
    float InrToEgp = 0.21;
    float EgpToInr = 4.70;
    float InrToCny = 0.093;
    float CnyToInR = 10.77;
    float InrToEur = 0.011;
    float EurToInr = 88.65;
    float InrToJpy = 1.42;
    float JpyToInr = 0.70;
    float InrToKwd = 0.0041;
    float KwdToInr = 244.85;
    float InrToNpr = 1.60;
    float NprToInr = 0.63;
    float InrToPkr = 2.25;
    float PkrToInr = 0.45;
    float InrToQar = 0.049;
    float QarToInR = 20.56;
    float InrToSgd = 0.018;
    float SgdToInr = 54.61;
    float InrToAed = 0.049;
    float AedToInr = 20.38;
    float InrToGbp = 0.010;
    float GbpToInr = 97.96;
    float InrToVnd=309.59;
    float VndToInr=0.0032;

    float first, second;
    cout<<"\t\t\t\t\t\t\tCurrency Convertor Application"<<endl;
        cout<<"\t\t\t\t\t\t\t------------------------------"<<endl;
    while (1)
    {
        
        cout << "Enter the input character: q to quit\n 1. INR (Indian Rupee) to USD (United-States Dollar)\n 2. USD (United-States Dollar) to INR (Indian Rupee)\n 3. INR (Indian Rupee) to ARS (Argentine Peso)\n 4. ARS (Argentine Peso) to INR (Indian Rupee)\n 5. INR (Indian Rupee) to AUD (Australian Dollar)\n 6. AUD (Australian Dollar) to INR (Indian Rupee)\n 7. INR (Indian Rupee) to BTC (Bitcoin)\n 8. BTC (Bitcoin) to INR (Indian Rupee)\n 9. INR (Indian Rupee) to CAD (Canadian Dollar)\n 10. CAD (Canadian Dollar) to INR (Indian Rupee)\n 11. INR (Indian Rupee) to EGP(Egyptian Pound)\n 12. EGP(Egyptian Pound) to INR (Indian Rupee)\n 13. INR (Indian Rupee) to CNY (Chinese Yuan)\n 14. CNY (Chinese Yuan) to INR (Indian Rupee)\n 15. INR (Indian Rupee) to EUR (Euro)\n 16. EUR (Euro) to INR (Indian Rupee)\n 17. INR (Indian Rupee) to JPY(Japanese Yen)\n 18. JPY(Japanese Yen) to INR (Indian Rupee)\n 19. INR (Indian Rupee) to KWD (Kuwaiti Dinar)\n 20. KWD (Kuwaiti Dinar) to INR (Indian Rupee)\n 21. INR (Indian Rupee) to NPR (Nepalese Rupee)\n 22. NPR (Nepalese Rupee) to INR (Indian Rupee)\n 23. INR (Indian Rupee) to PKR (Pakistani Rupee)\n 24. PKR (Pakistani Rupee) to INR (Indian Rupee)\n 25. INR (Indian Rupee) to QAR (Qatari Rial)\n 26. QAR (Qatari Rial) to INR (Indian Rupee)\n 27. INR (Indian Rupee) to SGD(Singapore Dollar)\n 28. SGD(Singapore Dollar) to INR (Indian Rupee)\n 29. INR (Indian Rupee) to AED (United Arab Emirates Dirham)\n 30. AED (United Arab Emirates Dirham) to INR (Indian Rupee)\n 31. INR (Indian Rupee) to GBP (Pound sterling)\n 32. GBP (Pound sterling) to INR (Indian Rupee)\n 33. INR (Indian Rupee) to VND (Vietnamese Dong)\n 34. VND (Vietnamese Dong) to INR (Indian Rupee)\n"<< endl;
        cin >> input;

        switch (input)
        {
        case 'q':
            cout << "Quitting the program....." << endl;
            goto end;
            break;

        case 1:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToUsd;
            cout << first << " INR (Indian Rupee) is equal to " << second << " USD (United-States Dollar)\n\n"
                 << endl;
            break;

        case 2:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * USDtoInr;
            cout << first << " USD (United-States Dollar) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
            break;

        case 3:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToArs;
            cout << first << " INR (Indian Rupee) is equal to " << second << " ARS (Argentine Peso)\n\n"
                 << endl;
            break;

        case 4:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * ArsToInr;
            cout << first << " ARS (Argentine Peso) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
            break;

        case 5:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToAud;
            cout << first << " INR (Indian Rupee) is equal to " << second << " AUD (Australian Dollar)\n\n"
                 << endl;
            break;

        case 6:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * AudToInR;
            cout << first << " AUD (Australian Dollar) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
            break;

        case 7:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToBtc;
            cout << first << " INR (Indian Rupee) is equal to " << second << " BTC (Bitcoin)\n\n"
                 << endl;
            break;

        case 8:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * BtcToInr;
            cout << first << " BTC (Bitcoin) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
            break;

        case 9:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToCad;
            cout << first << " INR (Indian Rupee) is equal to " << second << " CAD (Canadian Dollar)\n\n"
                 << endl;
            break;

        case 10:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * CadToInr;
            cout << first << " CAD (Canadian Dollar) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
            break;

        case 11:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToEgp;
            cout << first << " INR (Indian Rupee) is equal to " << second << " EGP(Egyptian Pound) \n\n"
                 << endl;
            break;

        case 12:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * EgpToInr;
            cout << first << " EGP(Egyptian Pound) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                 break;

        case 13:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToCny;
            cout << first << " INR (Indian Rupee) is equal to " << second << " CNY (Chinese Yuan)\n\n"
                 << endl;
                  break;

        case 14:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * CnyToInR;
            cout << first << " CNY (Chinese Yuan) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 15:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToEur;
            cout << first << " INR (Indian Rupee) is equal to " << second << " EUR (Euro)\n\n"
                 << endl;
                  break;

        case 16:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * EurToInr;
            cout << first << " EUR (Euro) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 17:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToJpy;
            cout << first << " INR (Indian Rupee) is equal to " << second << " JPY(Japanese Yen)\n\n"
                 << endl;
                  break;

        case 18:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * JpyToInr;
            cout << first << " JPY (Japanese Yen) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 19:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToKwd;
            cout << first << " INR (Indian Rupee) is equal to " << second << " KWD (Kuwaiti Dinar)\n\n"
                 << endl;
                  break;

        case 20:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * KwdToInr;
            cout << first << " KWD (Kuwaiti Dinar) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 21:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToNpr;
            cout << first << " INR (Indian Rupee) is equal to " << second << " NPR (Nepalese Rupee)\n\n"
                 << endl;
                  break;

        case 22:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * NprToInr;
            cout << first << " NPR (Nepalese Rupee) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 23:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToPkr;
            cout << first << " INR (Indian Rupee) is equal to " << second << " PKR (Pakistani Rupee)\n\n"
                 << endl;
                  break;

        case 24:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * PkrToInr;
            cout << first << " PKR (Pakistani Rupee) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 25:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToQar;
            cout << first << " INR (Indian Rupee) is equal to " << second << " QAR (Qatari Rial)\n\n"
                 << endl;
                  break;

        case 26:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * QarToInR;
            cout << first << " QAR (Qatari Rial) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 27:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToSgd;
            cout << first << " INR (Indian Rupee) is equal to " << second << " SGD(Singapore Dollar)\n\n"
                 << endl;
                  break;

        case 28:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * SgdToInr;
            cout << first << " SGD (Singapore Dollar) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 29:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToAed;
            cout << first << " INR (Indian Rupee) is equal to " << second << " AED (United Arab Emirates Dirham)\n\n"
                 << endl;
                  break;

        case 30:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * AedToInr;
            cout << first << " AED (United Arab Emirates Dirham) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

        case 31:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * InrToGbp;
            cout << first << " INR (Indian Rupee) is equal to " << second << " GBP (Pound sterling)\n\n"
                 << endl;
                  break;

        case 32:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * GbpToInr;
            cout << first << " GBP (Pound sterling) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
                  break;

                   case 33:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first *InrToVnd;
            cout << first << " INR (Indian Rupee) is equal to " << second << " VND (Vietnamese Dong)\n\n"
                 << endl;
                  break;

                   case 34:
            cout << "Enter quantity in terms of first unit" << endl;
            cin >> first;
            second = first * VndToInr;
            cout << first << " VND (Vietnamese Dong) is equal to " << second << " INR (Indian Rupee)\n\n"
                 << endl;
            break;

        default:
            break;
        }
    }

end:
    return 0;
}

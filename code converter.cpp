
#include <iostream>
#include <math.h>
#include<cstring>
using namespace std;

int main()
{
	start:
    char oper , retry;
    float num1, num2;
    int decimalNum=0, binaryNum[20], i = 0;
    int bnum, rem = 0, count = 0, sum = 0, flag = 1;
    int octalNum[50];
    long bn;
    int octalnum = 0;
    int oct, dec = 0, k = 0;
    long bin = 0;
    char binaryNumber[1000], hexadecimalNumber[1000];
    int temp;
    long int binaryIndex = 0, hexadecimalIndex = 0;
	int num,j=0;
	char hexa[100];
	int len=0;
	int decimal=0;
	char hexadecimal[10];
	
	cout<<"-----------------------------------------------------------------------------------------------------------------------\n";
	cout<<                                                  "\t\t\t\t\t\t CONVERT SYSTEM\n"                                           ;
	cout<<"-----------------------------------------------------------------------------------------------------------------------\n";

    cout << "A. Decimal to binary\n";
    cout << "B. binary to decimal\n";
    cout << "C. decimal to octal\n";
    cout << "D. binary to octal\n";
    cout << "E. octal to decimal\n";
    cout << "F. octal to binary\n";
    cout << "G. decimal to hexadecimal\n";
    cout << "H. binary to hexadecimal\n";
    cout << "I. hexadecimal to decimal\n";
    cout << "J. hexadecimal to octal\n";

    cout << "\nEnter your choice(A,B,C,D,E,F,G,H,I,J): ";

    cin >> oper;

    switch (oper)
    
    { 
	case 'A':
   	
	
        cout << "Enter the Decimal Number: ";
        cin >> decimalNum;
        while (decimalNum != 0)
        {
            binaryNum[i] = decimalNum % 2;
            i++;
            decimalNum = decimalNum / 2;
        }
        cout << "\nEquivalent Binary Value: ";
        for (i = (i - 1); i >= 0; i--)
            cout << binaryNum[i];
        	cout << endl<<endl;
        	cout << "thank you for using code";
        
		break;
        // decimal to bianary
    
    
   	 case 'B':
		

        cout << "Enter a binary number: ";
        cin >> bnum;

        while (bnum > 0)
        {
            rem = bnum % 10;
            if (rem == 0 || rem == 1)
            {
                sum = sum + rem * pow(2, count);
            }
            else
            {
                flag = 0;
        	}
            count++;
            bnum = bnum / 10;
        }

        if (flag)
        {
            cout << "Decimal number is " << sum<<endl<<endl;
        }
        else
        {
            cout << "Invalid binary number"<<endl;
        }
        cout << "thank you for using code";
        break;
        // binary to decimal
	
	
    case 'C':
    
		
        cout << "Enter any Decimal number: ";
        cin >> decimalNum;
        while (decimalNum != 0)
        {
            octalNum[i] = decimalNum % 8;
            i++;
            decimalNum = decimalNum / 8;
        }
        cout << "\nEquivalent Octal Value = ";
        for (i = (i - 1); i >= 0; i--)
            cout << octalNum[i];
       		cout << endl<<endl;
       		cout << "thank you for using code";
        break;
        // decimal to octal
	
	
    case 'D':

{
        long bn;
        int octalnum = 0, decimalnum, i = 0;
        cout << "enter the  binary number :";
        cin >> bn;
        while (bn != 0)
        {
            decimalnum += (bn % 10) * pow(2, i);
            i++;
            bn /= 10;
        }
        i = 1;
        while (decimalnum != 0)
        {
            octalnum += (decimalnum % 8) * i;
            decimalnum /= 8;
            i *= 10;
        }
        cout << "octal number :" << octalnum<<endl<<endl;
}		cout << "thank you for using code";
        break;
        // binary to octal
        
        
   	 case 'E':
		

        cout << "enter the octal number :";
        cin >> oct;
        while (oct != 0)
        {
            rem = oct % 10;
            dec = dec + rem * pow(8, k);
            oct = oct / 10;
            k++;
        }
        cout << "octal number in decimal = " << dec<<endl<<endl;
        cout <<"thank you for using code";
        break;
    // octal to decimal
    
    
  	  case 'F':
{

        int num, dec = 0, place = 0;
        cout << "enter octal number :";
        cin >> num;
        while (num)
        {
            rem = num % 10;
            dec = dec + rem * pow(8, place);
            num = num / 10;
            place++;
        }
        place = 1;
        rem = 0;
        while (dec)
        {
            rem = dec % 2;
            bin = bin + (rem * place);
            dec = dec / 2;
            place = place * 10;
        }
        cout << "binary number is :" << bin<<endl<<endl;
}		cout<<"thank you for usnig code";
        break;
        // octal to binary
        
        
        case 'G':


		cout<<"enter the decimal nummber :";
		cin>>num;
		temp=num;
		while(temp>0)
	    {
			rem=temp%16;
			if(rem<10)
				hexa[j++]=48+rem;
			else
				hexa[j++]=55+rem;
				temp=temp/16;
		}
		cout<<"hexadecimal number is :";
		for(i=j-1;i>=0;i--)
		{
			cout<<hexa[i];
		}
		cout<<endl<<endl;
		cout<<"thank you for using code";
		break;
		//decimal to hexadecimal
		
		
		case 'H':
			

	cout << "Enter Binary Number: ";
    cin >> binaryNumber;

    while (binaryNumber[binaryIndex])
	 {
        binaryNumber[binaryIndex] = binaryNumber[binaryIndex] - 48;
        ++binaryIndex;
     }
    --binaryIndex;

    while (binaryIndex - 2 >= 0)
	 {
        temp = binaryNumber[binaryIndex - 3] * 8 + binaryNumber[binaryIndex - 2] * 4 + binaryNumber[binaryIndex - 1] * 2 + binaryNumber[binaryIndex];
        if (temp > 9)
		 {
            hexadecimalNumber[hexadecimalIndex++] = temp + 55;
         } 
		else
		 {
            hexadecimalNumber[hexadecimalIndex++] = temp + 48;
         }
        binaryIndex = binaryIndex - 4;
     }

    if (binaryIndex == 1)
	 {
        hexadecimalNumber[hexadecimalIndex] = binaryNumber[binaryIndex - 1] * 2 + binaryNumber[binaryIndex] + 48;
     }
	  else if (binaryIndex == 0)
	  {
        hexadecimalNumber[hexadecimalIndex] = binaryNumber[binaryIndex] + 48;
      } 
	  else
	  {
  	      --hexadecimalIndex;
      }

 	      cout << "\nHexadecimal Number : ";
  	  while (hexadecimalIndex >= 0)
  	  	{
  	      cout << hexadecimalNumber[hexadecimalIndex--];
    	}
		cout<<endl<<endl;;
		cout<<"thank you for using code";			
        break;
        // binary to hexadecimal 
     
		
	
	case 'I':
		

	cout<<"enter the hexa number :";
	cin>>hexa;
	len=strlen(hexa);
	for(i=len-1;i>=0;i--)
	{
		if(hexa[i]>='0'&& hexa[i]<='9')
		{
			sum=sum+(hexa[i]-48)*pow(16,j);
			j++;
		}
		else if(hexa[i]>='A' && hexa[i]<='F')
		{
			sum=sum+(hexa[i]-55)*pow(16,j);
			j++;
		}
	}
	cout<<"decimal number :"<<sum<<endl<<endl;
	cout<<"thank you for using code";
	break;
	//hexadecimal to decimal
	
	
	case 'J':
		

	cout<<"enter the hexadecimal :";
	cin>>hexadecimal;
	while(hexadecimal[i]!='\0')
	{
		len++;
		i++;
	}
		len--;
		i=0;
	while(len>=0)
	{
			rem=hexadecimal[len];
		if(rem>=48 && rem<=57)
			rem=rem-48;
		else if(rem>=65 && rem<-70)
			rem=rem-55;
		else if(rem>=97 && rem<=102)
			rem=rem-87;
		else
		{
			cout<<"\ninvalid number";
			cout<<endl;
			return 0;
		}
			decimalNum=decimalNum+(rem*pow(16,i));
			len--;
			i++;
	}
		i=0;
	while(decimalNum!=0)
	{
		octalNum[i]=decimalNum%8;
		i++;
		decimalNum=decimalNum/8;
	}
	cout<<"octal number is :";
	for(i=(i-1);i>=0;i--)
	cout<<octalNum[i];
	cout<<endl<<endl;
	cout<<"thank you for using code";
	break;
	default :
		cout<<"invalid number "<<endl;
		cout<<"enter the valid number";
	}

	cout << "type y for yes & n for no : ";
	cin >> retry;
    if (retry == 'y'){
        goto start;
    } 
    else if(retry == 'n'){
        return 0;
    }
    else {
        cout << "Invalid Response";
    }
	
	
}

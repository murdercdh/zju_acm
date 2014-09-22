/*
#include <iostream.h>
void main ()
{
	int n,t,a[10],i,leg,k,j;
	while (cin>>t>>n)
	{
		if (t==0&&n==0) break;
		leg=0;
		while (n)
		{
			a[leg]=n%10;
			n/=10;leg++;
		}
		for (i=0;i<(t+1)*2+1;i++)
		{
			for (j=leg-1;j>=0;j--)
			{
				switch(a[j])
				{
				case 1:
					if (i%(t+1)==0) for (k=0;k<(t+2);k++) cout<<" ";
					else
					{
						for (k=0;k<(t+1);k++) cout<<" ";
						cout<<"|";
					}
					break;
				case 2:
					if (i%(t+1)==0)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else if (i<t+1)
					{
						for (k=0;k<t+1;k++) cout<<" ";
						cout<<"|";
					}
					else if (i>t+1)
					{
						cout<<"|";
						for (k=0;k<t+1;k++) cout<<" ";
					}
					break;
				case 3:
					if (i%(t+1)==0)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else
					{
						for (k=0;k<t+1;k++) cout<<" ";
						cout<<"|";
					}
					break;
				case 4:
					if (i==0||i==2*(t+1)) for (k=0;k<(t+2);k++) cout<<" ";
					else if (i==t+1)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else if (i<t+1)
					{
						cout<<"|";
						for (k=0;k<t;k++) cout<<" ";
						cout<<"|";
					}
					else
					{
						for (k=0;k<t+1;k++) cout<<" ";
						cout<<"|";
					}
					break;
				case 5:
					if (i%(t+1)==0)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else if (i>t+1)
					{
						for (k=0;k<t+1;k++) cout<<" ";
						cout<<"|";
					}
					else if (i<t+1)
					{
						cout<<"|";
						for (k=0;k<t+1;k++) cout<<" ";
					}
					break;
				case 6:
					if (i%(t+1)==0)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else if (i<t+1)
					{
						cout<<"|";
						for (k=0;k<t+1;k++) cout<<" ";
					}
					else
					{
						cout<<"|";
						for (k=0;k<t;k++) cout<<" ";
						cout<<"|";
					}
					break;
				case 7:
					if (i==0)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else if (i%(t+1)==0) for (k=0;k<(t+2);k++) cout<<" ";
					else
					{
						for (k=0;k<t+1;k++) cout<<" ";
						cout<<"|";
					}
					break;
				case 8:
					if (i%(t+1)==0)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else
					{
						cout<<"|";
						for (k=0;k<t;k++) cout<<" ";
						cout<<"|";
					}
					break;
				case 9:
					if (i%(t+1)==0)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else if (i<t+1)
					{
						cout<<"|";
						for (k=0;k<t;k++) cout<<" ";
						cout<<"|";
					}
					else
					{
						for (k=0;k<t+1;k++) cout<<" ";
						cout<<"|";
					}
					break;
				case 0:
					if (i==0||i==(t+1)*2)
					{
						cout<<" ";
						for (k=0;k<t;k++) cout<<"-";
						cout<<" ";
					}
					else if (i==t+1) for (k=0;k<(t+2);k++) cout<<" ";
					else
					{
						cout<<"|";
						for (k=0;k<t;k++) cout<<" ";
						cout<<"|";
					}
					break;
				}
				if (j) cout<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
*/
#include <iostream> 
#include <string> 

using namespace std; 

int main(void){ 
    long n,s,i,j,t,len; 
    char a[9]; 
    while(cin>>s>>a){ 
        if(s==0&&strcmp(a,"0")==0) break; 
        len=strlen(a); 
        for(i=0;i<len;i++){ 
            if(a[i]=='0'||a[i]=='2'||a[i]=='3'||a[i]=='5' 
            ||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'){ 
                cout<<" "; 
                for(j=0;j<s;j++) cout<<"-"; 
                cout<<" "; 
            } 
            else{ 
                cout<<" "; 
                for(j=0;j<s;j++) cout<<" "; 
                cout<<" "; 
            } 
            if(i<len-1) cout<<" "; 
        } 
        cout<<endl; 
        for(i=0;i<s;i++){ 
            for(j=0;j<len;j++){ 
                if(a[j]=='0'||a[j]=='4'||a[j]=='8'||a[j]=='9'){ 
                    cout<<"|"; 
                    for(t=0;t<s;t++) cout<<" "; 
                    cout<<"|"; 
                } 
                else if(a[j]=='1'||a[j]=='2'||a[j]=='3'||a[j]=='7'){ 
                    for(t=0;t<s+1;t++) cout<<" "; 
                    cout<<"|"; 
                } 
                else{ 
                    cout<<"|"; 
                    for(t=0;t<s+1;t++) cout<<" "; 
                } 
                if(j<len-1) cout<<" "; 
            } 
            cout<<endl; 
        } 
        for(i=0;i<len;i++){ 
            if(a[i]=='0'||a[i]=='1'||a[i]=='7'){ 
                for(j=0;j<s+2;j++) cout<<" "; 
            } 
            else{ 
                cout<<" "; 
                for(j=0;j<s;j++) cout<<"-"; 
                cout<<" "; 
            } 
            if(i<len-1) cout<<" "; 
        } 
        cout<<endl; 
        for(i=0;i<s;i++){ 
            for(j=0;j<len;j++){ 
                if(a[j]=='0'||a[j]=='6'||a[j]=='8'){ 
                    cout<<"|"; 
                    for(t=0;t<s;t++) cout<<" "; 
                    cout<<"|"; 
                } 
                else if(a[j]=='1'||a[j]=='3'||a[j]=='4'||a[j]=='5' 
                ||a[j]=='7'||a[j]=='9'){ 
                    for(t=0;t<s+1;t++) cout<<" "; 
                    cout<<"|"; 
                } 
                else{ 
                    cout<<"|"; 
                    for(t=0;t<s+1;t++) cout<<" "; 
                } 
                if(j<len-1) cout<<" "; 
            } 
            cout<<endl; 
        } 
        for(i=0;i<len;i++){ 
            if(a[i]=='0'||a[i]=='2'||a[i]=='3'||a[i]=='5' 
                ||a[i]=='6'||a[i]=='8'||a[i]=='9'){ 
                cout<<" "; 
                for(j=0;j<s;j++) cout<<"-"; 
                cout<<" "; 
            } 
            else{ 
                cout<<" "; 
                for(j=0;j<s;j++) cout<<" "; 
                cout<<" "; 
            } 
            if(i<len-1) cout<<" "; 
        } 
        cout<<endl<<endl; 
    } 
    return 0; 
}

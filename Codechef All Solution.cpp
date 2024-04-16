// XYSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l = s.size(),ans = 0;
        
        for(int i=0;i<l-1;i++){
            if(s[i]!=s[i+1])ans++,i++;
        }
        
        cout << ans << '\n';
    }
}




// FLOW001

#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
   int a,b;
   cin>>a>>b;
   cout<<a+b<<endl;
  }


return 0;
}


//FLOW001

#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}



// FLOW002


#include<bits/stdc++.h>
using namespace std;
int main(){

 int t;
 cin>>t;
 while(t--){
    int a,b;
    cin>>a>>b;
    cout<<a%b<<endl;
 }
return 0;
}




//FLOW004


#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;
 int n,firstdigit,lastdigit,sum=0;
 while(t--){
    cin>>n;
    lastdigit=n%10;
    firstdigit=n;
    while(n>=10){
        n=n/10;
    }
    firstdigit=n;
    sum=firstdigit+lastdigit;
    cout<<sum<<endl;
 }
 return 0;
}


//FLOW005

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		int a[6]={100,50,10,5,2,1};
		int n,count=0;
		cin>>n;
		for(int i=0;i<6;i++)
		{
			count+=(n/a[i]);
			n=n%a[i];
		}
		cout<<count<<endl;
	}
	return 0;
}



//FLOW006


#include<bits/stdc++.h>
using namespace std;
int main(){

 int t;
 cin>>t;
 while(t--){
    int n,sum=0;
    cin>>n;
    while(n!=0){
            sum=sum+(n%10);
            n=n/10;
    }
    cout<<sum<<endl;
 }
return 0;
}


//FLOW007

#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;
 int n,rev=0;
 while(t--){
    cin>>n;
    while(n!=0){
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;
    }
    cout<<rev<<endl;
    rev=0;
 }
 return 0;
}


//Alternative

#include<bits/stdc++.h>
using namespace std;
#define size 100001
char ara[size];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
	{
		int n;
		cin>>n;
		int rev=0;
		int temp=n;
		while(temp!=0)
		{
			rev=rev*10;
			rev=rev+temp%10;
			temp/=10;
		}
		cout<<rev<<endl;
	}
    return 0;
}



//FLOW008

#include<bits/stdc++.h>

using namespace std;

int main()
{
   
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<10)
        cout<<"Thanks for helping Chef!"<<endl;
    else
        cout<<"-1"<<endl;
  }
  return 0;
}



//FLOW009

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		double q,p;
		cin>>q>>p;
		if(q>1000){
			printf("%lf\n",(q*p)-(q*p*0.1));
		}else
		{
		    printf("%lf\n",q*p);
		}
	}
	return 0;
}






//FLOW010

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      char s;
      cin>>s;
      s=tolower(s);
      if(s=='b'){
		cout<<"BattleShip"<<endl;
      }
	  if(s=='c'){
		cout<<"Cruiser"<<endl;
	  }
	  if(s=='d'){
		cout<<"Destroyer"<<endl;
	  }
	  if(s=='f'){
		cout<<"Frigate"<<endl;
	  }
    }
    return 0;
}


//FLOW011

#include<bits/stdc++.h>
using namespace std;
/*bool comp(int a,int b)
{
	return a>b;
}*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int BasicSalary;
        double GrossSalary;
        cin>>BasicSalary;
        if(BasicSalary<1500)
		{
			GrossSalary=BasicSalary+BasicSalary*0.1+BasicSalary*0.9;
			cout<<fixed<<setprecision(2)<<GrossSalary<<endl;
		}else{
		    GrossSalary=BasicSalary+500+BasicSalary*0.98;
		    cout<<fixed<<setprecision(2)<<GrossSalary<<endl;
		}
    }
    return 0;
}






//FLOW013

#include<bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)==180)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
  }
  return 0;
}



//FLOW014

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int hardness;
        float carbonContent;
        int tensile;
        cin>>hardness>>carbonContent>>tensile;
        if(hardness>50 && carbonContent<0.7 && tensile>5600){
			cout<<10<<endl;
        }
		else if(hardness>50 && carbonContent<0.7){
			cout<<9<<endl;
		}
		else if(carbonContent<0.7 && tensile>5600){
			cout<<8<<endl;
		}
		else if(hardness>50 && tensile>5600){
			cout<<7<<endl;
		}
		else if(hardness>50 || carbonContent<0.7 || tensile>5600){
			cout<<6<<endl;
		}
		else{
			cout<<5<<endl;
		}
    }
    return 0;
}






//FLOW016

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		long long a,b;
		cin>>a>>b;
		cout<<__gcd(a,b)<<' '<<(a/__gcd(a,b))*b<<endl;
	}
	return 0;
}



//FLOW017

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b>c || c>b && b>a)
        cout<<b<<endl;
    if(b>a && a>c || a>b && a<c)
        cout<<a<<endl;
    if(a>c && c>b || a<c && c<b)
        cout<<c<<endl;

  }
  return 0;
}


//FLOW018

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long fact=1;
    for(long long i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;

  }
  return 0;
}







// START01


#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	cout<<n<<endl;
	return 0;
}



// TSORT 

#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;
 vector<int>a;
 for(int i=0;i<t;i++){
    int n;
    cin>>n;
    a.push_back(n);
 }
 sort(a.begin(),a.end());
 for(int i=0;i<t;i++){
    cout<<a[i]<<endl;
 }
 return 0;
}


//LUCKFOUR

#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;
 int n,cnt=0,rem;
 while(t--){
    cin>>n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        if(rem==4){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    cnt=0;
 }
 return 0;
}



//FSQRT

#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;
 int n;
 while(t--){
    cin>>n;
    int k=sqrt(n);
    cout<<k<<endl;
 }
 return 0;
}



//PRB01


#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
 int i;
  if(n<2){
    return false;
  }
  if(n==2)
  {
      return true;
  }
  for(i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
          }
  return true;

}
int main(){

 int t;
 cin>>t;
 int n;
 while(t--){
    cin>>n;
    if(isPrime(n)==true)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

 }
 return 0;
}



//INTEST

// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)
#include <bits/stdc++.h> 

using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Read the input n, k
	int n, k;
	cin >> n >> k;

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++) {
		long long t;
		cin >> t;
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	cout << ans << "\n";	
		
	return 0;
}


//Alternative sol

// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)
#include <bits/stdc++.h> 

using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Read the input n, k
	int n, k;
	cin >> n >> k;

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	cout << ans << "\n";	
		
	return 0;
}


//CIELRCPT

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t,res=0;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    int menu=2048;
    while(n){
        if(n>=menu){
            n-=menu;
            res++;
        }
        menu/=2;
    }
    cout<<res<<endl;
    res=0;
  }
  return 0;
}


//Aleternative sol

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t,res=0;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    int menu=2048;
    while(n){
        if(n>=menu){
                while(n>=menu){
            n-=menu;
            res++;
                }
        }
        menu/=2;
    }
    cout<<res<<endl;
    res=0;
  }
  return 0;
}



//CHOPRT

#include<bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
   int a,b;
   cin>>a>>b;
   if(a==b)
    cout<<"="<<endl;
   else if(a<b)
    cout<<"<"<<endl;
   else
    cout<<">"<<endl;
  }
  return 0;
}


//HS08TEST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int X;
		float Y;
	cin>>X>>Y;
	if(X%5!=0||X>Y-0.5)
	{
	    cout<<Y;
	}
	else
	{
	    cout<<Y-X-0.5;
	}
	return 0;
}


//FCTRL2

#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int multiply(int x,int res[],int res_size);
void factorial(int n)
{
    int res[MAX];

    // Initialize result
    res[0] = 1;
    int res_size = 1;
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++){
        res_size = multiply(x, res, res_size);}
    for (int i=res_size-1; i>=0; i--){
        cout << res[i];}
        cout<<endl;
}
int multiply(int x,int res[],int res_size)
{
	int carry=0;
	for(int i=0;i<res_size;i++)
	{
		int prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}
	while(carry!=0)
		{
			res[res_size]=carry%10;
			carry=carry/10;
			res_size++;
		}
	return res_size;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		int n;
		cin>>n;
		factorial(n);
	}
	return 0;
}




//TLG


#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,max=0,win=1,p1=0,p2=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        p1+=a;
        p2+=b;
            if(abs(p1-p2)>max)
            {
                max=abs(p1-p2);
                if(p1>p2)
					win=1;
				else
					win=2;
            }
    }
    cout<<win<<' '<<max<<endl;
    return 0;
}


//REMISS

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<max(a,b)<<' '<<(a+b)<<endl;
    }
    return 0;
}

//DECINC

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n%4==0)
	{
		n++;
	}else{
	  n--;
	}
	cout<<n<<endl;
	return 0;
}


//AMR15A

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,even=0,odd=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	if(even>odd)
		cout<<"READY FOR BATTLE"<<endl;
	else
		cout<<"NOT READY"<<endl;
}




//PALL01


#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    string s1,s2;
    cin>>s1;
    s2=s1;
    reverse(s1.begin(),s1.end());
    if(s1==s2)
		cout<<"wins"<<endl;
	else
		cout<<"loses"<<endl;
    }
    return 0;
}



//DIFFSUM


#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    if(a>b)
		cout<<abs(a-b)<<endl;
	else
		cout<<a+b<<endl;
}


//PPSUM

#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
	return n*(n+1)/2;
}
int f(int d,int n)
{
	while(d--)
	{
		n=sum(n);
	}
	return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
	{
		int d,n,ans=0;
		cin>>d>>n;

		cout<<f(d,n)<<endl;
	}
	return 0;
}



//LAPIN


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int right[26]= {0};
        int left[26]= {0};
        int l=s.size();
        for(int i=0;i<l/2;i++)
		{
			int index=s[i]-'a';
			right[index]++;
		}
		for(int i=(l+1)/2;i<l;i++)
		{
			int index=s[i]-'a';
			left[index]++;
		}
		bool flag=false;
		for(int i=0;i<26;i++)
		{
			if(right[i]!=left[i])
			{
				flag=true;
			}
		}
		if(flag==false)
		{
			cout<<"YES"<<endl;
		}else{
		    cout<<"NO"<<endl;
		}
    }
    return 0;
}




//RECIPE

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=__gcd(a[0],a[1]);
		for(int i=2;i<n;i++)
		{
			ans=__gcd(ans,a[i]);
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]/ans<<' ';
		}
		cout<<endl;
    }
    return 0;
}


//SMPAIR

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		//cout<<a[i]<<' ';
		cout<<a[0]+a[1]<<endl;
    }
    return 0;
}



//HEADBOB

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		int n,y_count=0,i_count=0,n_count=0;
		cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<s.size();++i)
		{
			if(s[i]=='Y')
				y_count++;
			else if(s[i]=='I')
				i_count++;
			else
				n_count++;
		}
		if(y_count>0)
			cout<<"NOT INDIAN"<<endl;
		else if(i_count>0)
			cout<<"INDIAN"<<endl;
		else
			cout<<"NOT SURE"<<endl;
	}
	return 0;
}



//GDOG

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		int n,k,ans=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++)
		{
			ans=max(ans,n%i);
		}
		cout<<ans<<endl;
	}
	return 0;
}


//RECTANGL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		int a[4];
		for(int i=0;i<4;i++)
			cin>>a[i];
		sort(a,a+4);
		if((a[0]==a[1])&&(a[2]==a[3]))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		}
		return 0;
}



//TWOVSTEN

#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,cnt=0;
    cin>>t;
    while(t--)
	{
		long long n;
		cin>>n;
		if(n%10==0)
			cout<<0<<endl;
		else if(n%5==0)
			cout<<1<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;

}


//VOWELTB

#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin>>c;
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		cout<<"Vowel"<<endl;
	else
		cout<<"Consonant"<<endl;

}


//POTATOES

#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int i=x+y+1;
	    while(!isPrime(i))
	    i++;
	    cout<<i-x-y<<endl;
	}
	return 0;
}


//SNCKYEAR

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		set<int>s={2010,2015,2016,2017,2019};
		int n;
		cin>>n; 
			if(s.count(n))
			{
				cout<<"HOSTED"<<endl;
			}else{
				cout<<"NOT HOSTED"<<endl;
			}
	}
	return 0;
}


//XORNEY

#include <bits/stdc++.h>
using namespace std;
/* properties of xor
   odd^odd=even
   odd^even=odd
   even^odd=odd
   even^even=even
   1 2 3 4 there has 2 odd
   that's why 1^3=even , and total is even
   l=1%2!=0 and r=4%2==0 (4-1)+1=4  4%2==0 Even
*/
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long l,r,count=0;
		cin>>l>>r;
		if(l%2==0 and r%2==0)
		{
			count=(r-l)/2;
		}else
		{
			count=(r-l)/2+1;
		}
		if(count%2==0)
			cout<<"Even"<<endl;
		else
			cout<<"Odd"<<endl;
	}
	return 0;
}


//Alternative

#include <bits/stdc++.h>
using namespace std;
/* properties of xor
   odd^odd=even
   odd^even=odd
   even^odd=odd
   even^even=even
   1 2 3 4 there has 2 odd
   that's why 1^3=even , and total is even
   l=1%2!=0 and r=4%2==0 (4-1)+1=4  4%2==0 Even
*/
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long l,r;
		cin>>l>>r;
		int count=0;
		if(l%2==0 and r%2==0)
		{
			count=(r-l)/2;
		}else
		{
			count=(r-l)/2+1;
		}
		if(count%2==0)
			cout<<"Even"<<endl;
		else
			cout<<"Odd"<<endl;
	}
	return 0;
}



//BEGGASOL

#include<bits/stdc++.h>
using namespace std;
#define size 100001
char ara[size];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int distance=0;
		int gas=a[0];
		for(int i=1;i<n;i++)
		{
			if(gas==0)
				break;
			gas=gas-1+a[i];
			distance++;
		}
		cout<<gas+distance<<endl;
	}
    return 0;
}


//TEST

#include<bits/stdc++.h>
using namespace std;
#define size 100001
char ara[size];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1)
	{
		int n;
		cin>>n;
		if(n==42)
			break;
		cout<<n<<endl;
	}
    return 0;
}



//FCTRL

#include<bits/stdc++.h>
using namespace std;
int trailing_zeros(int n)
{
	int fives=0,twos=0;
	for(int i=5;i<=n;i+=5)
	{
		int temp=i;
		while(temp%5==0)
		{
			fives++;
			temp/=5;
		}
	}
	
	return fives;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<trailing_zeros(n)<<endl;
    }
    return 0;
}


//Alternative


#include<bits/stdc++.h>
using namespace std;
int trailing_zeros(int n)
{
	int x=5,zeros=0;
	while(x<=n)
	{
		zeros+=(n/x);
		x*=5;
	}
	return zeros;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<trailing_zeros(n)<<endl;
    }
    return 0;
}

//Alternative

#include<bits/stdc++.h>
using namespace std;
int trailing_zeros(int n)
{
	int x=5,zeros=0;
	while(x<=n)
	{
		zeros+=(n/x);
		x*=5;
	}
	return zeros;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<trailing_zeros(n)<<endl;
    }
    return 0;
}


//RECIPE

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	int temp;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++) cin>>a[i];

    	int ans=gcd(a[0],a[1]);
    	for(int i=2;i<n;i++)
		{
			ans=gcd(ans,a[i]);
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]/ans<<' ';
		}
		cout<<endl;
    }
    return 0;
}


//CARVANS

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++) cin>>a[i];

    	int ans=0;
    	int speedPrevCar=INT_MAX;
    	for(int i=0;i<n;i++)
		{
			if(speedPrevCar>=a[i])
			{
				ans++;
				speedPrevCar=a[i];
			}
		}
		cout<<ans<<endl;
    }
    return 0;
}


//PERMUT2

#include<bits/stdc++.h>
using namespace std;

/*int nCr(int n,int r){
    int res = 1 ;
    r = min(r,n-r) ; // nCr = nC(n-r)
    for(int i=r;i>=1;i--){
        res = res * n ;
        res /= i ;
        n -- ;
    }
    return res ;
}*/

int main()
{
	int n;
	cin>>n;
	while(n){
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int inverse[n];
		for(int i=0;i<n;i++){
			inverse[a[i]-1]=i+1;
		}
		bool ambg=true;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=inverse[i])
			{
				ambg=false;
			}
		}
		if(ambg)
			cout<<"ambiguous"<<endl;
		else
			cout<<"not ambiguous"<<endl;
		cin>>n;
	}
	return 0;
}



//SUMTRIAN

#include<bits/stdc++.h>
using namespace std;

/*int nCr(int n,int r){
    int res = 1 ;
    r = min(r,n-r) ; // nCr = nC(n-r)
    for(int i=r;i>=1;i--){
        res = res * n ;
        res /= i ;
        n -- ;
    }
    return res ;
}*/
/*int a[105][105];
int maxSum(int rows)
{
	for(int i=rows-2;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);
		}
	}
	return a[0][0];
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
            {
                a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);
            }
        }
        cout<<a[0][0]<<endl;
    }
    return 0;
}


//SPLITIT

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool found=false;
		for(int i=0;i<n-1;i++)
		{
			if(s[i]==s[n-1])
			{
				found=true;
			}
		}
		if(found==true)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}



//DECREM

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

/*vector<ll>primes;
vector<bool>marked(32000,true);

void seive()
{
	marked[0]=marked[1]=false;
	for(int i=2;i<32000;i++)
	{
		if(marked[i])
		{
			for(int j=i*i;j<=32000;j+=i)
			{
				marked[j]=false;
			}
		}
	}
	for(int i=0;i<32000;i++)
	{
		if(marked[i])
		{
			primes.push_back(i);
		}
	}
}
void segSieve(ll l,ll r)
{
	if(l==1) l++;
	vector<bool>s(r-l+1,true);
	for(int i=0;i<r-l+1;i++)
	{
		ll currentPrime=primes[i];
		ll base=(l/currentPrime)*currentPrime;
		if(base<r) base+=currentPrime;
		for(int i=base;i<=r;i+=base)
		{
			if(base!=currentPrime)
			{
				s[i-l]=false;
			}
		}
	}
	for(int i=0;i<l;i++)
	{
		if(s[i])
		{
			cout<<i<<endl;
		}
	}
}*/


int fun(int l,int r)
{
	if(r>=(2*l))
		return -1;
	else
		return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
    	int l,r;
    	cin>>l>>r;
    	cout<<fun(l,r)<<endl;
    }
    return 0;
}


//LSUM

#include<bits/stdc++.h>

using namespace std;

vector<int>add(vector<int>x,vector<int>y)
{
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());
	vector<int>ans;
	int len=min(x.size(),y.size());
	int carry=0;
	for(int i=0;i<len;i++)
	{
		int value=x[i]+y[i]+carry;
		carry=value/10;
		ans.push_back(value%10);
	}
	if(x.size()>len)
	{
		for(int i=len;i<x.size();i++){
		int value=x[i]+carry;
		carry=value/10;
		ans.push_back(value%10);
		}
	}
	if(y.size()>len)
	{
		for(int i=len;i<y.size();i++)
		{
			int value=y[i]+carry;
			carry=value/10;
			ans.push_back(value%10);
		}
	}
	while(carry)
	{
		ans.push_back(carry%10);
		carry/=10;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

//substraction

/*vector<int>sub(vector<int>x,vector<int>y)
{
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());
	int len = y.size();
	vector<int>ans;
	for(int i=0;i<len;i++)
	{
		if(x[i]<y[i])
		{
		   x[i+1]--;
		   	ans.push_back(10+x[i]-y[i]);
		}else{
		    ans.push_back(x[i]-y[i]);
		}
	}
	if(x.size()>len)
	{
		for(int i=len;i<x.size();i++)
		{
			if(x[i]<0){
				x[i+1]--;
				ans.push_back(10+x[i]);
			}else{
			    ans.push_back(x[i]);
			}
		}
	}
	reverse(ans.begin(),ans.end());
	vector<int>result;
	int i=0;
	while(ans[i]==0) i++;
	for(;i<ans.size();i++)
	{
		result.push_back(ans[i]);
	}

	return result;
}

//Division

vector<int>div(vector<int>x)
{
	int rem=0;
	vector<int>ans;
	for(int i=0;i<x.size();i++)
	{
		if(rem)
		{
			rem=rem*10+x[i];
			ans.push_back(rem/2);
			rem=rem%2;

		}else{
		   if(x[i]<2)
		   {
		   	 rem+=x[i];
		   	 ans.push_back(0);
		   }else{
		      rem=x[i]%2;
		      ans.push_back(x[i]/2);
		   }

		}
	}
	vector<int>result;
	int i=0;
	while(ans[i]==0) i++;
	for(;i<ans.size();i++)
	{
		result.push_back(ans[i]);
	}
	return result;
}*/

vector<int>integer(string s)
{
	vector<int>convert;
	for(int i=0;i<s.size();i++)
	{
		convert.push_back(s[i]-'0');
	}
	return convert;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
		string a,b;
		cin>>a>>b;
		vector<int>a1(integer(a));
		vector<int>b1(integer(b));
		vector<int>sum(add(a1,b1));

		for(auto x:sum)
		{
			cout<<x;
		}
		cout<<endl;
	}
	return 0;
}



//SUMPOS

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       vector<int>v(3);
       for(int i=0; i<3; i++) cin>>v[i];
       sort(v.begin(),v.end());
       if(v[2]==v[0]+v[1])
       {
           cout<<"YES"<<endl;
       }else{
          cout<<"NO"<<endl;
       }
   }
   return 0;

}



//EVENDIFF

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0; i<n; i++) cin>>v[i];
       int odd=0,even=0;
       for(int i=0; i<v.size(); i++)
       {
           if(v[i]%2==0)
           {
               even++;
           }else
           {
               odd++;
           }
       }
       cout<<min(odd,even)<<endl;
   }
   return 0;

}


//EVENGAME

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0; i<n; i++) cin>>v[i];
       int sum=0;
       for(int i=0; i<v.size(); i++)
       {
           sum+=v[i];
       }
       if(sum%2==0)
        cout<<1<<endl;
       else
        cout<<2<<endl;
   }
   return 0;

}


//INTRVS

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       int n,k;
       cin>>n>>k;
       vector<int>v(n);
       for(int i=0; i<n; i++) cin>>v[i];
       int rejected=0;
       int bot=0;
       int too_slow=0;
       string ans;
       for(int i=0; i<n; i++)
       {
           if(v[i]==-1)
           {
               rejected++;
           }
           else if(v[i]>k)
           {
               too_slow++;
           }
           else if(v[i]>-1 and v[i]<=1)
           {
               bot++;
           }
       }
       if(rejected>(n/2))
       {
           ans="Rejected";
       }
       else if(too_slow>0)
       {
           ans="Too Slow";
       }
       else if(bot==n)
       {
           ans="Bot";
       }
       else
       {
           ans="Accepted";
       }
       cout<<ans<<endl;
   }
   return 0;

}


//PASSWD

#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int l=0;
    int u=0;
    int d=0;
    int m=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s.size()>=10)
        {
            if(islower(s[i])) l=1;
            if(i>0 and i<s.size()-1){
            if(isupper(s[i])) u=1;
            if(isdigit(s[i])) d=1;
            if(s[i]=='@' or s[i]=='#' or s[i]=='&' or s[i]=='%' or s[i]=='?') m=1;
            }
        }
    }
    if(l==1 and u==1 and d==1 and m==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}



//MANYSUMS

#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
            int r,l;
            cin>>r>>l;
            cout<<(2*l)-(2*r)+1<<endl;
    }
    return 0;
}



//MINIL

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
	{
		int a,b;
		cin>>a>>b;
		int total = a*b;
		char arr[a][b];
		for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                cin>>arr[i][j];
            }
        }
        int ans1=0,ans2=0;
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                if((i+j)%2 == 0 and arr[i][j] == '.')
                {
                    ans1++;
                }
                if((i+j)%2 == 1 and arr[i][j] == '*')
                {
                    ans1++;
                }
            }
        }
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {
                if((i+j)%2==0 and arr[i][j] == '*')
                {
                    ans2++;
                }
                if((i+j)%2 == 1 and arr[i][j] == '.')
                {
                    ans2++;
                }
            }
        }
        if(total%2 == 0)
            cout<<min(ans1,ans2)<<endl;
        else
            cout<<ans1<<endl;
	}
    return 0;
}


//ATTENDU

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt=0;
	    for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
        }
        if(cnt>30)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	}
    return 0;
}


//CATHIEF

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
	{
	    int x,y,k,n;
	    cin>>x>>y>>k>>n;
	    if(abs(x-y)%(2*k)==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
	}
    return 0;
}


//SDSTRING

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>>s;
        int zeros=0,ones=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                zeros++;
            }else{
                ones++;
            }
        }
            if(s.size()%2==1 or zeros==0 or ones==0)
                cout<<-1<<endl;
            else
                cout<<abs(zeros-ones)/2<<endl;
    }
    return 0;
}


//HDIVISR

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

       int n;
       cin>>n;
       int mx=0;
       for(int i=1; i<10; i++)
       {
           if(n%i==0)
           {
               mx=max(mx,i);
           }
       }
       cout<<mx<<endl;
    return 0;
}


//CIRCHAOR

#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
int max_fact(int g,int n)
{
    int fact=0;
    for(int i=1; i*i<=g; i++)
    {
        if(g%i==0)
        {
            if(i<=n)
            {
                fact=max(fact,i);
            }
            if(g/i<=n)
            {
                fact=max(fact,g/i);
            }
        }
    }
    return fact;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
       int n,m;
       cin>>n>>m;
       vector<int>p(m);
       for(int i=0; i<m; i++) cin>>p[i];
       int g=0;
       for(int i=0; i<m; i++)
       {
           g = gcd(g,p[i]);
       }
           if(g>n)
           {
               int fact=max_fact(g,n);
               g=fact;

           }
           cout<<n-g<<endl;
    }
    return 0;
}


//LSUM


#include<bits/stdc++.h>
using namespace std;

vector<int>add(vector<int>x,vector<int>y)
{
    vector<int>sum;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int len = min(x.size(),y.size());
    int carry=0;
    for(int i=0; i<len; i++)
    {
        int ans = x[i]+y[i]+carry;
        sum.push_back(ans%10);
        carry=ans/10;
    }
    if(x.size()>len)
    {
        for(int i=len; i<x.size(); i++)
        {
            int ans = x[i]+carry;
            sum.push_back(ans%10);
            carry=ans/10;
        }
    }
    if(y.size()>len)
    {
        for(int i=len; i<y.size(); i++)
        {
            int ans = y[i]+carry;
            sum.push_back(ans%10);
            carry=ans/10;
        }
    }
    while(carry)
    {
        sum.push_back(carry%10);
        carry/=10;
    }
    reverse(sum.begin(),sum.end());
    return sum;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string x,y;
        cin>>x>>y;
        vector<int>a;
        vector<int>b;
        //vector<int>ans;
        for(int i=0; i<x.size(); i++) a.push_back(x[i]-'0');
        for(int i=0; i<y.size(); i++) b.push_back(y[i]-'0');
        vector<int>ans(add(a,b));
        for(auto x: ans){
            cout<<x;
        }
        cout<<'\n';
    }
    return 0;
}


//Alternative sol

#include<bits/stdc++.h>
using namespace std;

vector<int>add(vector<int>x,vector<int>y)
{
    vector<int>sum;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int len = min(x.size(),y.size());
    int carry=0;
    for(int i=0; i<len; i++)
    {
        int ans = x[i]+y[i]+carry;
        sum.push_back(ans%10);
        carry=ans/10;
    }
    if(x.size()>len)
    {
        for(int i=len; i<x.size(); i++)
        {
            int ans = x[i]+carry;
            sum.push_back(ans%10);
            carry=ans/10;
        }
    }
    if(y.size()>len)
    {
        for(int i=len; i<y.size(); i++)
        {
            int ans = y[i]+carry;
            sum.push_back(ans%10);
            carry=ans/10;
        }
    }
    while(carry)
    {
        sum.push_back(carry%10);
        carry/=10;
    }
    reverse(sum.begin(),sum.end());
    return sum;
}
vector<int>integer(string s)
{
    vector<int>convert;
    for(int i=0; i<s.size(); i++)
    {
        convert.push_back(s[i]-'0');
    }
    return convert;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string x,y;
        cin>>x>>y;
        vector<int>a(integer(x));
        vector<int>b(integer(y));
        vector<int>ans(add(a,b));
        for(auto x: ans){
            cout<<x;
        }
        cout<<'\n';
    }
    return 0;
}



//SPLITIT

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      char last = s[n-1];
      bool found=false;
      for(int i=0; i<n-1; i++)
      {
          if(s[i]==last)
          {
              found=true;
          }
      }
      if(found==true)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }
    return 0;
}


//NOTIME


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   /* int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=s[i+1])
            {
                cnt1++;
            }
        }
        cout<<cnt1<<endl;
        cnt1=0;
    }*/
    int n,h,x;
    cin>>n>>h>>x;
    vector<int>v(n);
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]+x==h)
        {
            flag=true;
        }
    }
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


//GROUPS

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(s[i]==s[i+1])
                    continue;
                else
                    cnt1++;
            }
        }
        cout<<cnt1<<endl;
        cnt1=0;
    }
    return 0;
}



//DIV03

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a(10);
        for(int i=0; i<10; i++) cin>>a[i];
        int k;
        cin>>k;
        int i=9;
        while(k>=a[i])
        {
            k=k-a[i];
            i--;
        }
        cout<<i+1<<endl;
    }
    return 0;
}



//SPACEARR

#include<bits/stdc++.h>

using namespace std;

/*void reverse_word(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=' ')
        {
            st.push(s[i]);
        }
        else
        {
            while(st.empty()==false)
            {
                cout<<st.top();
                st.pop();
            }
            cout<<' ';
        }
    }
    while(st.empty()==false)
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}*/
std::vector<int> v;
set<char>diagonal,other;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int diff=0;
        bool flag=false;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) 
        {
            /* code */
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=1; i<=n; i++)
        {
            if(v[i-1]>i)
            {
                flag=true;
            }else{
            diff=diff+(abs(v[i-1]-i));
        }
        }
        if(diff%2==0 or flag==true)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }

    return 0;
}


//SOCK1

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    /*ll k,l,cnt=0;
    cin>>k>>l;
    std::vector<int> a(k);
    std::vector<int> b(l);
    for (int i = 0; i < k; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < l; ++i)
    {
        cin>>b[i];
    }
    for(int i=0; i<k; i++)
    {
        for (int j = 0; j < l; ++j)
        {
            if(abs(a[i]-b[j])==1)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    int t;
    cin>>t;
    while(t--){
    int w;
    cin>>w;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        sum+=(s[i]-'A');
    }
    if(sum<w)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}*/
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    if(a==b or b==c or c==a)
    {
        flag=true;
    }
    if(flag==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


//BOLT

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    /*ll k,l,cnt=0;
    cin>>k>>l;
    std::vector<int> a(k);
    std::vector<int> b(l);
    for (int i = 0; i < k; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < l; ++i)
    {
        cin>>b[i];
    }
    for(int i=0; i<k; i++)
    {
        for (int j = 0; j < l; ++j)
        {
            if(abs(a[i]-b[j])==1)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    int t;
    cin>>t;
    while(t--){
    int w;
    cin>>w;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        sum+=(s[i]-'A');
    }
    if(sum<w)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}*/
   
   int t;
   cin>>t;
   while(t--)
   {
     float k1,k2,k3,v;
     cin>>k1>>k2>>k3>>v;
     float m = 9.575;
     float result = (100.00)/(k3*k2*k1*v);
     if(result<m)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
   }
    return 0;
}


//SSCRIPT

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    /*ll k,l,cnt=0;
    cin>>k>>l;
    std::vector<int> a(k);
    std::vector<int> b(l);
    for (int i = 0; i < k; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < l; ++i)
    {
        cin>>b[i];
    }
    for(int i=0; i<k; i++)
    {
        for (int j = 0; j < l; ++j)
        {
            if(abs(a[i]-b[j])==1)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    int t;
    cin>>t;
    while(t--){
    int w;
    cin>>w;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        sum+=(s[i]-'A');
    }
    if(sum<w)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}*/
   
   int t;
   cin>>t;
   while(t--)
   {
     int n,k,cnt=0,i;
     cin>>n>>k;
     string s;
     cin>>s;
     for (i = 0; i < n; ++i)
     {
         if(s[i]=='*')
         {
            cnt++;
         }
         else
         {
            cnt=0;
         }
         if(cnt>=k)
         {
            cout<<"YES"<<endl;
            break;
         }
     }
     if(i==n)
     {
        cout<<"NO"<<endl;
     }
    
   }
    return 0;
}


//SLOOP

#include <bits/stdc++.h>
#include<math.h>
using namespace std;


#define IOS ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define forn(i,n) for(int i=0; i<int(n); i++)
#define MX 10000
bool sq[MX+5];

typedef long long int ll;


void no()
{
    cout<<"-1"<<endl;
}
//Driver func to sort pair by second elements
bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second<b.second;
}

/*void solve()
{
   int n;
   cin>>n;
   vector<string>v(n);
   vector<pair<int,int>>p;
   forn(i,n)
   {
      cin>>v[i];
      forn(j,n)
      {
         if(v[i][j]=='*')
         {
             p.push_back({i,j});
         }
      }
   }
   p.push_back(p[0]);
   p.push_back(p[1]);
   if(p[0].first == p[1].first)
   {
       p[2].first = (p[2].first+1)%n;
       p[3].first = (p[3].first+1)%n;
   }
   if(p[0].second == p[1].second)
   {
      p[2].second = (p[2].second+1)%n;
      p[3].second = (p[3].second+1)%n;
   }
   else
   {
      swap(p[2].first,p[3].first);
   }
   v[p[2].first][p[2].second]='*';
   v[p[3].first][p[3].second]='*';

   forn(i,n)
   {
    cout<<v[i]<<endl;
   }
}*/
void solve()
{
  
   ll m,s;
   cin>>m>>s;
   cout<<m/s<<endl;
}
int main()

{
    
    /*#ifndef ONLINE_JUDGE 
    freopen("in.txt", "r", stdin); 
    freopen("out.txt", "w", stdout);
    #endif*/

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


//MARARUN

#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t;
    cin>>t;
    while(t--)
    {
       int D,d,a,b,c;
       cin>>D>>d>>a>>b>>c;
       if((D*d)<10)
        cout<<0<<endl;
       if((D*d)>=10 and (D*d)<21)
        cout<<a<<endl;
       if((D*d)>=21 and (D*d)<42)
        cout<<b<<endl;
       if((D*d)>=42)
        cout<<c<<endl;
    }


    return 0;
}



//COCONUT

#include <bits/stdc++.h>

using namespace std;


#define IOS ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define forn(i,n) for(int i=0; i<int(n); i++)
#define MX 10000
bool sq[MX+5];

typedef long long int ll;

/*Driver func to sort pair by second elements
bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second<b.second;
}

void solve()
{
   int n;
   cin>>n;
   vector<string>v(n);
   vector<pair<int,int>>p;
   forn(i,n)
   {
      cin>>v[i];
      forn(j,n)
      {
         if(v[i][j]=='*')
         {
             p.push_back({i,j});
         }
      }
   }
   p.push_back(p[0]);
   p.push_back(p[1]);
   if(p[0].first == p[1].first)
   {
       p[2].first = (p[2].first+1)%n;
       p[3].first = (p[3].first+1)%n;
   }
   if(p[0].second == p[1].second)
   {
      p[2].second = (p[2].second+1)%n;
      p[3].second = (p[3].second+1)%n;
   }
   else
   {
      swap(p[2].first,p[3].first);
   }
   v[p[2].first][p[2].second]='*';
   v[p[3].first][p[3].second]='*';

   forn(i,n)
   {
    cout<<v[i]<<endl;
   }
}*/
/*string Up2Low(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' and s[i]<='Z')
        {
            s[i]=(s[i]-'A')+'a';
        }
    }
    return s;
}




unsigned long long int msb(long long n)
{
    for(int idx=63; idx>=0; idx--)
    {
        if((n & (1ll<<idx))!= 0)
        {
           return (1ll<<idx);
        }
    }
    return 0;
}


bool win(long long n)
{
    if(n==1)
      return false;
    unsigned long long nextStep = ((n&(n-1))==0 ? n>>1 : n-msb(n));

    return win(nextStep);
}

int maxPairProduct(const vector<int>&n)
{
   int result=0;

   for(int i=0; i<n.size(); i++)
   {
      for(int j=i+1; j<n.size(); j++)
      {
         if(n[i]*n[j]>result)
         {
           result=n[i]*n[j];
         }
      }
   }
   return result;
}



vector<int>a(MX), depth(MX,0);
void dfs(int l, int r, int cnt)
{
    //base case
   if (l>r)
   {
   // cout<<"Index"<<' '<<l<<' '<<r<<endl;
    return;
  }
   int mx=0,mx_i=0;
   //find max in a range
   for(int i=l; i<=r; i++)
   {
        if(mx<a[i])
        {
           mx=a[i];
           mx_i=i;
        }
   }
   //fill depth
   cout<<l<<' '<<r<<' '<<cnt<<endl;
   depth[mx_i]=cnt;
   dfs(l,mx_i-1,cnt+1);
   dfs(mx_i+1,r,cnt+1);

}


int lcm(int a, int b)
{
   return (a/(__gcd(a,b)))*b;
}


vector<bool>marked(9000001,true);
vector<long long>primes;

void sieve(int n)
{
  marked[0]=marked[1]=false;
  for(int i=2; i*i<=n; i++)
  {
    if(marked[i])
    {
      for(int j=i*i; j<=n; j+=i)
      {  
        marked[j]=false;
      }
    }
  }
  for(int i=0;i<=n;i++)
  {
    if(marked[i])
    {
      primes.push_back(i);
    }
  }
}*/





int main()

{
    
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif

    /*int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int freq[26]={0};

    for(int i=0; i<n; i++)
    {
       freq[s[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
       if(freq[i]<k)
       {
          k-=freq[i];
          freq[i]=0;
       }
       else
       {
          freq[i]-=k;
          k=0;
       }
    }
    string res="";
    for(int i=n-1; i>=0; i--)
    {
       if(freq[s[i]-'a']>0)
       {
           res+=s[i];
           freq[s[i]-'a']--;
       }
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;*/

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(c/a)+(d/b)<<endl;
    }

    return 0;
}




//CVOTE

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);

#define MAXN 1000010
#define pb push_back
int cnt [ MAXN+1];
const int mod = 1e9+7;
vector <ll> v;
bool prime[MAXN];
/*void sieve()
{
	v.pb(2);
	for(ll i=3;i*i<=MAXN;i+=2)
	{
		if(prime[i] == false)
		{
			for(ll j=i*i;j<=MAXN;j+=(2*i))
				prime[j] = true;
		}
	}
	for(ll i=3;i<=MAXN;i+=2) if(prime[i] == false) v.pb(i);

}
ll lm(ll a,ll b)
{
	return (a/__gcd(a,b))*b;
}
ll lcm(vector<ll> v)
{
	ll lc = 1;
	for(int i=0;i<v.size();i++)
	{
		lc = lm(lc,v[i]);
	}
	return lc;
}
ll sum(ll n,ll a,ll b)
{
	if(a % n == 0) return (b/n)-(a/n)+1;
	return (b/n)-(a/n);
}
void solve()
{
   ll c,d,m;
   cin >> c >> d >> m;
   ll a = max(c,d);
   ll b = min (c,d);
   if(a==b) {
	cout<<0<<endl;
	return;
   }

   ll ans = 0;
	ans = m+1;
	b  = a-b;
   int mn = -1;
   vector<ll>str;
	ll tmp  = b;

   for(int i=0;i<v.size() && v[i]*v[i] <= b;i++)
   {
	   if(b%v[i] == 0)
	   {
		   while(b%v[i] == 0)
		   {
			   b /= v[i];
		   }
		   str.pb(v[i]);
	   }
   }
   if(b > 1) str.pb(b);
	 b = tmp;

		int total = 1<<str.size();
   for(int i=1;i<total;i++)
   {
	   vector<ll>res;
			for(int j=0;j<str.size();j++)
			{
				if(i & (1 << j))
				   {
					   res.push_back(str[j]);
				   }
			}

			if(res.size() % 2 != 0)
			{
			  ll lc = lcm(res);
			  if(lc <= a)
			  {
				 ll es = sum(lc,a,a+m);
				 ans -= es;
			  }
			}
			else{
			   ll lc = lcm(res);

			  if(lc <= a)
			  {
				  ll es = sum(lc,a,a+m);

				 ans += es;
			  }
			}
   }
   cout<<ans<<endl;

}


//stringstream 

vector<int>parseInts(string s){
	stringstream ss(s);

	int a;
	char c;
	vector<int>ans;
	while(ss>>a){
		ans.push_back(a);
		ss>>c;
	}
	return ans;
}

*/

void solve(){

}

int gcd(int a, int b){
	if(a>b){
		swap(a,b);
	}

	if(a==0) return b;

	return gcd(a, b%a);
}

int main()
{   
	
	// IOS;
	// double memoizedArray[1000001];//Array for Memoization
	// memoizedArray[0] = 0; //Don't do manual log for 0, it will throw an error

	// //Memoizing the array
	// for(int i=1;i<=1000000;i++){
	//   memoizedArray[i] = memoizedArray[i-1] + log(i);
	// }

	// int testCase, base;
	// long digits,n;

	// cin >> testCase;

	// for(int i = 1; i<= testCase; i++){
	//     cin >> n >> base;
	//     //The formula
	//     digits = memoizedArray[n]/log(base) + 1;
	//     cout << "Case " << i << ": " << digits << "\n";
	// }


	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

    int n,m;
    cin>>n>>m;

    map<string ,string>mp1;
    map<string, int>mp2;
    map<string, int>mp3;


    for(int i=0; i<n; i++){
        string chef,country;

        cin>>chef>>country;

        mp1[chef]=country;
    }

    int chef=0, votes=0;

    for(int i=0; i<m; i++){
        string s;
        cin>>s;

        mp2[s]++;
        mp3[mp1[s]]++;

        chef=max(chef, mp2[s]);
        votes=max(votes, mp3[mp1[s]]);
    }


    for(auto it : mp3){
        if(it.second==votes){
            cout<<it.first<<endl;
            break;
        }
    }
    for(auto it : mp2){
        if(it.second==chef){
            cout<<it.first<<endl;
            break;
        }
    }
    
	return 0;
}



//HELIUM3

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);

#define MAXN 10000001
#define pb push_back
int cnt [ MAXN+1];
const int mod = 1e9+7;

bool prime[MAXN];

using vi = vector<int>;
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair



template <typename T>inline T BigMod(T base , T power, T MOD){
	
	T ret = 1;
	while(power){
		if(power & 1) ret = (ret*base)%MOD;

		base=(base*base)%MOD;

		power>>=1;
	}
	return ret;
}



/*void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAXN; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAXN; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAXN; j+=2*i)
                prime[j] = true;
}

void sieve()
{
	v.pb(2);
	for(ll i=3;i*i<=MAXN;i+=2)
	{
		if(prime[i] == false)
		{
			for(ll j=i*i;j<=MAXN;j+=(2*i))
				prime[j] = true;
		}
	}
	for(ll i=3;i<=MAXN;i+=2) if(prime[i] == false) v.pb(i);

}

ll lm(ll a,ll b)
{
	return (a/__gcd(a,b))*b;
}
ll lcm(vector<ll> v)
{
	ll lc = 1;
	for(int i=0;i<v.size();i++)
	{
		lc = lm(lc,v[i]);
	}
	return lc;
}
ll sum(ll n,ll a,ll b)
{
	if(a % n == 0) return (b/n)-(a/n)+1;
	return (b/n)-(a/n);
}
void solve()
{
   ll c,d,m;
   cin >> c >> d >> m;
   ll a = max(c,d);
   ll b = min (c,d);
   if(a==b) {
	cout<<0<<endl;
	return;
   }

   ll ans = 0;
	ans = m+1;
	b  = a-b;
   int mn = -1;
   vector<ll>str;
	ll tmp  = b;

   for(int i=0;i<v.size() && v[i]*v[i] <= b;i++)
   {
	   if(b%v[i] == 0)
	   {
		   while(b%v[i] == 0)
		   {
			   b /= v[i];
		   }
		   str.pb(v[i]);
	   }
   }
   if(b > 1) str.pb(b);
	 b = tmp;

		int total = 1<<str.size();
   for(int i=1;i<total;i++)
   {
	   vector<ll>res;
			for(int j=0;j<str.size();j++)
			{
				if(i & (1 << j))
				   {
					   res.push_back(str[j]);
				   }
			}

			if(res.size() % 2 != 0)
			{
			  ll lc = lcm(res);
			  if(lc <= a)
			  {
				 ll es = sum(lc,a,a+m);
				 ans -= es;
			  }
			}
			else{
			   ll lc = lcm(res);

			  if(lc <= a)
			  {
				  ll es = sum(lc,a,a+m);

				 ans += es;
			  }
			}
   }
   cout<<ans<<endl;

}


//stringstream 

vector<int>parseInts(string s){
	stringstream ss(s);

	int a;
	char c;
	vector<int>ans;
	while(ss>>a){
		ans.push_back(a);
		ss>>c;
	}
	return ans;
}



void solve(){

}

int gcd(int a, int b){
	if(a>b){
		swap(a,b);
	}

	if(a==0) return b;

	return gcd(a, b%a);
}


//Kadane's Algorithm

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


vector<int>v;

long long ans=INT_MAX, sum=0,curr=0;

void bf(int k){

	if(k==n){
		ans=min(ans,abs(sum-2*curr));
		return;
	}

	curr+=v[k];
	bf(k+1);
	curr-=v[k];
	bf(k+1);
}

// sieve of erathosthenes using bitset 

ll _seive_size;

bitset<10000001>bs;

vector<int>primes;

void sieve(ll upperbound){
	_seive_size=upperbound+1;

	bs.set();

	bs[0] = bs[1] = 0;


	for(ll i=2; i<=_seive_size; i++) if(bs[i]){

		for(ll j= i*i ; j<=_seive_size; j+=i) bs[j]=0;
			primes.push_back((int)i);
		}  
}


/// binary search in a optimal way


	int lo = 0;
	int hi = n-1;

	while(hi-lo>1){
		int mid=(hi+lo)/2;

		if(v[mid]<x){
			lo=mid+1;
		}else{
			hi=mid;
	}
}  


// custom compartor
bool comp(const pair<int, int>&a , const pair<int, int>&b){
	return a.second<b.second;
}


//Generic Function 
template <typename T> T genericMin(T a, T b){
	return (a<b? a: b);
}*/

int main()
{   
	
	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int a,b,x,y;

	cin>>a>>b>>x>>y;

	if((x*y)>=(a*b))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}

	return 0;
}  



//WCC


#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);

#define MAXN 10000001
#define pb push_back
int cnt [ MAXN+1];
const int mod = 1e9+7;

bool prime[MAXN];

using vi = vector<int>;
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair



/*template <typename T>inline T BigMod(T base , T power, T MOD){
	
	T ret = 1;
	while(power){
		if(power & 1) ret = (ret*base)%MOD;

		base=(base*base)%MOD;

		power>>=1;
	}
	return ret;
}



void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAXN; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAXN; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAXN; j+=2*i)
                prime[j] = true;
}

void sieve()
{
	v.pb(2);
	for(ll i=3;i*i<=MAXN;i+=2)
	{
		if(prime[i] == false)
		{
			for(ll j=i*i;j<=MAXN;j+=(2*i))
				prime[j] = true;
		}
	}
	for(ll i=3;i<=MAXN;i+=2) if(prime[i] == false) v.pb(i);

}

ll lm(ll a,ll b)
{
	return (a/__gcd(a,b))*b;
}
ll lcm(vector<ll> v)
{
	ll lc = 1;
	for(int i=0;i<v.size();i++)
	{
		lc = lm(lc,v[i]);
	}
	return lc;
}
ll sum(ll n,ll a,ll b)
{
	if(a % n == 0) return (b/n)-(a/n)+1;
	return (b/n)-(a/n);
}
void solve()
{
   ll c,d,m;
   cin >> c >> d >> m;
   ll a = max(c,d);
   ll b = min (c,d);
   if(a==b) {
	cout<<0<<endl;
	return;
   }

   ll ans = 0;
	ans = m+1;
	b  = a-b;
   int mn = -1;
   vector<ll>str;
	ll tmp  = b;

   for(int i=0;i<v.size() && v[i]*v[i] <= b;i++)
   {
	   if(b%v[i] == 0)
	   {
		   while(b%v[i] == 0)
		   {
			   b /= v[i];
		   }
		   str.pb(v[i]);
	   }
   }
   if(b > 1) str.pb(b);
	 b = tmp;

		int total = 1<<str.size();
   for(int i=1;i<total;i++)
   {
	   vector<ll>res;
			for(int j=0;j<str.size();j++)
			{
				if(i & (1 << j))
				   {
					   res.push_back(str[j]);
				   }
			}

			if(res.size() % 2 != 0)
			{
			  ll lc = lcm(res);
			  if(lc <= a)
			  {
				 ll es = sum(lc,a,a+m);
				 ans -= es;
			  }
			}
			else{
			   ll lc = lcm(res);

			  if(lc <= a)
			  {
				  ll es = sum(lc,a,a+m);

				 ans += es;
			  }
			}
   }
   cout<<ans<<endl;

}


//stringstream 

vector<int>parseInts(string s){
	stringstream ss(s);

	int a;
	char c;
	vector<int>ans;
	while(ss>>a){
		ans.push_back(a);
		ss>>c;
	}
	return ans;
}



void solve(){

}

int gcd(int a, int b){
	if(a>b){
		swap(a,b);
	}

	if(a==0) return b;

	return gcd(a, b%a);
}


//Kadane's Algorithm

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


vector<int>v;

long long ans=INT_MAX, sum=0,curr=0;

void bf(int k){

	if(k==n){
		ans=min(ans,abs(sum-2*curr));
		return;
	}

	curr+=v[k];
	bf(k+1);
	curr-=v[k];
	bf(k+1);
}

// sieve of erathosthenes using bitset 

ll _seive_size;

bitset<10000001>bs;

vector<int>primes;

void sieve(ll upperbound){
	_seive_size=upperbound+1;

	bs.set();

	bs[0] = bs[1] = 0;


	for(ll i=2; i<=_seive_size; i++) if(bs[i]){

		for(ll j= i*i ; j<=_seive_size; j+=i) bs[j]=0;
			primes.push_back((int)i);
		}  
}


/// binary search in a optimal way


	int lo = 0;
	int hi = n-1;

	while(hi-lo>1){
		int mid=(hi+lo)/2;

		if(v[mid]<x){
			lo=mid+1;
		}else{
			hi=mid;
	}
}  


// custom compartor
bool comp(const pair<int, int>&a , const pair<int, int>&b){
	return a.second<b.second;
}


//Generic Function 
template <typename T> T genericMin(T a, T b){
	return (a<b? a: b);
}*/

int main()
{   
	
	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		string s;
		cin>>s;


		int c,d,n;
		c=d=n=0;

		for(int i=0;i<(int)s.size(); i++){
			if(s[i]=='C'){
				c++;
			}
			else if(s[i]=='N'){
				n++;
			}
			else{
				d++;
			}
		}

		c=2*c+d;
		n=2*n+d;

		if(c>n){
			cout<<(60*x)<<endl;
		}
		else if(c<n){
			cout<<(40*x)<<endl;
		}
		else{
			cout<<(55*x)<<endl;
		}

	}


	return 0;
}      



//NOFIX


int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int>v(n);
		for(int i=0; i<n; i++) cin>>v[i];

		int c=0,x=0;

		for(int i=0; i<n; i++){
			x=i+c+1;
			if(x==v[i]){
				c++;
			}
		}
		cout<<c<<endl;



//TRAVELFAST

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define IOS ios_base::sync_with_stdio(0);  cin.tie(0); cout.tie(0);

#define MAXN 10000001
#define pb push_back
int cnt [ MAXN+1];
const int mod = 1e9+7;

bool prime[MAXN];

using vi = vector<int>;
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;

#define s second
#define mp make_pair



/*template <typename T>inline T BigMod(T base , T power, T MOD){
	
	T ret = 1;
	while(power){
		if(power & 1) ret = (ret*base)%MOD;

		base=(base*base)%MOD;

		power>>=1;
	}
	return ret;
}



void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAXN; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAXN; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAXN; j+=2*i)
                prime[j] = true;
}

void sieve()
{
	v.pb(2);
	for(ll i=3;i*i<=MAXN;i+=2)
	{
		if(prime[i] == false)
		{
			for(ll j=i*i;j<=MAXN;j+=(2*i))
				prime[j] = true;
		}
	}
	for(ll i=3;i<=MAXN;i+=2) if(prime[i] == false) v.pb(i);

}

ll lm(ll a,ll b)
{
	return (a/__gcd(a,b))*b;
}
ll lcm(vector<ll> v)
{
	ll lc = 1;
	for(int i=0;i<v.size();i++)
	{
		lc = lm(lc,v[i]);
	}
	return lc;
}
ll sum(ll n,ll a,ll b)
{
	if(a % n == 0) return (b/n)-(a/n)+1;
	return (b/n)-(a/n);
}
void solve()
{
   ll c,d,m;
   cin >> c >> d >> m;
   ll a = max(c,d);
   ll b = min (c,d);
   if(a==b) {
	cout<<0<<endl;
	return;
   }

   ll ans = 0;
	ans = m+1;
	b  = a-b;
   int mn = -1;
   vector<ll>str;
	ll tmp  = b;

   for(int i=0;i<v.size() && v[i]*v[i] <= b;i++)
   {
	   if(b%v[i] == 0)
	   {
		   while(b%v[i] == 0)
		   {
			   b /= v[i];
		   }
		   str.pb(v[i]);
	   }
   }
   if(b > 1) str.pb(b);
	 b = tmp;

		int total = 1<<str.size();
   for(int i=1;i<total;i++)
   {
	   vector<ll>res;
			for(int j=0;j<str.size();j++)
			{
				if(i & (1 << j))
				   {
					   res.push_back(str[j]);
				   }
			}

			if(res.size() % 2 != 0)
			{
			  ll lc = lcm(res);
			  if(lc <= a)
			  {
				 ll es = sum(lc,a,a+m);
				 ans -= es;
			  }
			}
			else{
			   ll lc = lcm(res);

			  if(lc <= a)
			  {
				  ll es = sum(lc,a,a+m);

				 ans += es;
			  }
			}
   }
   cout<<ans<<endl;

}


//stringstream 

vector<int>parseInts(string s){
	stringstream ss(s);

	int a;
	char c;
	vector<int>ans;
	while(ss>>a){
		ans.push_back(a);
		ss>>c;
	}
	return ans;
}



void solve(){

}

int gcd(int a, int b){
	if(a>b){
		swap(a,b);
	}

	if(a==0) return b;

	return gcd(a, b%a);
}


//Kadane's Algorithm

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


vector<int>v;

long long ans=INT_MAX, sum=0,curr=0;

void bf(int k){

	if(k==n){
		ans=min(ans,abs(sum-2*curr));
		return;
	}

	curr+=v[k];
	bf(k+1);
	curr-=v[k];
	bf(k+1);
}

// sieve of erathosthenes using bitset 

ll _seive_size;

bitset<10000001>bs;

vector<int>primes;

void sieve(ll upperbound){
	_seive_size=upperbound+1;

	bs.set();

	bs[0] = bs[1] = 0;


	for(ll i=2; i<=_seive_size; i++) if(bs[i]){

		for(ll j= i*i ; j<=_seive_size; j+=i) bs[j]=0;
			primes.push_back((int)i);
		}  
}


/// binary search in a optimal way


	int lo = 0;
	int hi = n-1;

	while(hi-lo>1){
		int mid=(hi+lo)/2;

		if(v[mid]<x){
			lo=mid+1;
		}else{
			hi=mid;
	}
}  


// custom compartor
bool comp(const pair<int, int>&a , const pair<int, int>&b){
	return a.second<b.second;
}


//Generic Function 
template <typename T> T genericMin(T a, T b){
	return (a<b? a: b);
}



vector<pair<int , int>>v[1005];
bool vis[1005];
int dis[1005];

vector<int>ans;

int mx=0;

void dfs(int node, int dist){
	if(vis[node]==1) return;

	ans.push_back(node);
	vis[node]=1;
	mx=max(mx,dist);
	dis[node]=dist;
	for(auto [u, w] : v[node]){
		dfs(u, dist+w);
	}
	return;
}

void solve(){

	int n;
	cin>>n;


	for(int i=0; i<n; i++) vis[i]=0;

	for(int i=1; i<=n-1; i++){
		int x,y,w;

		cin>>x>>y>>w;

		v[x].push_back({y,w});
		v[y].push_back({x,w});
	  }

		dfs(0,0);

		int next_node=0;

		for(int i=0; i<n; i++){
			if(dis[i]==mx){
				next_node=i;
				break;
			}
		}
		for(int i=0; i<n; i++){
			vis[i]=0;
		}
		mx=0;
		dfs(next_node,0);
		cout<<mx<<endl;		
}*/

int main()
{   
	
	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int x,y;
		cin>>x>>y;

		if(x<y){
			cout<<"BIKE"<<endl;
		}
		else if(x>y){
			cout<<"CAR"<<endl;
		}else{
			cout<<"SAME"<<endl;
		}
	}
	
	return 0;
}      


//VALENTINE

IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int x,y;
		cin>>x>>y;

		cout<<x/y<<endl;
	}
	
	return 0;



//NOTEBOOK

IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		ll a;
		cin>>a;

		a=a*1000;
		cout<<(a/100)<<endl;
	}
	
	return 0;




//HOSTELROOM

IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		ll n,x;
		cin>>n>>x;

		vector<ll>v(n);
		ll mx=x;
		for(ll i=0; i<n; i++){
			
			cin>>v[i];
			if(v[i]>=0){
				x+=v[i];
			}else{
				x-=abs(v[i]);
			}
			mx=max(mx,x);
		}
		cout<<mx<<endl;
		mx=0;
	}
	
	return 0;





//SMOKE

IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int n,x,y;
	cin>>n>>x>>y;

	int m=INT_MAX;

	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			int k=100*j+4*i;

			(k>=n)?m=min(m,i*y+j*x):0;
		}
	}
	cout<<m<<endl;
	}
	
	return 0;





// LOSTSEQ

IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int sum=0;

		int a[n*2];

		for(int i=0; i<n*2; i++){
			cin>>a[i];
			sum+=a[i];
		}

		(sum%2==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	
	return 0;




//STNGAME


#include <bits/stdc++.h>
#define nl "\n"
#define all(v) v.begin(), v.end()

#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

#define ll long long int
using namespace std;

void solve()
{
 int i;
 ll n;cin >> n;
 string s1, s2;cin >> s1 >> s2;
 string res(2 * n, '0');
 sort(all(s1));sort(all(s2));
 ll  tem = n - 1, bem = 0, b = n - 1,a = 0;
 ll rst = 2 * n - 1, TIH = 0;
    for (i = 0; i < 2 * n; i++)
    {
        if (b < bem){res[TIH] = s1[a];a += 1;TIH += 1;continue;}
        if (a > tem){res[TIH] = s2[b];b -= 1;TIH += 1;continue;}
        if (i % 2 == 0)
          {
            if (s1[a] < s2[b]){res[TIH] = s1[a];a += 1;TIH += 1;}
            else{res[rst] = s1[tem];rst -= 1;tem -= 1;}
        } 
        else
         {
           if (s2[b] > s1[a]){res[TIH] = s2[b];TIH += 1;b -= 1;}
           else
           {res[rst] = s2[bem];rst -= 1;bem += 1;}
             
         }
}cout << res << "\n";
}

int main()
{
    #ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout);
  #endif
    int test;
    cin >> test;
    while(test--)
    {solve();}
    return 0;
}





//START01

	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

    ll n;
    cin>>n;
    cout<<n<<endl;
	return 0;




//INTEST

IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

    ll n,k,cnt=0;

    cin>>n>>k;
    for(int i=1; i<=n; i++){
        ll a;
        cin>>a;

        if(a%k==0) cnt++;
    }
    cout<<cnt<<endl;
	return 0;				


//FLOW006

	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif


    int t;
    cin>>t;


    while(t--){

        ll n;
        cin>>n;

        ll ans=0;

        while(n){
            ans+=(n%10);
            n/=10;
        }
        cout<<ans<<endl;
    }

	return 0;






//HS08TEST

// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(2);

    int a;
    float b;
    cin >> a >> b;
    
    if ((a%5==0) && (b-a-0.5>=0))
    {
        cout << fixed << b-a-0.5 << endl;
    }
    else
    {
        cout << fixed << b << endl;
    }

    return 0;
}



//FLOW004


IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif


    int t;
    cin>>t;


    while(t--){

        string s;
        cin>>s;

        cout<<(s[0]-'0'+s[s.size()-1]-'0')<<endl;

    }

	return 0;



//Alternative sol

IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif


    int t;
    cin>>t;


    while(t--){

        ll n;
        cin>>n;

        ll first_digit,last_digit=n%10;

        while(n){
            first_digit=n%10;
            n/=10;
        }

        cout<<last_digit+first_digit<<endl;

    }

	return 0;




//LUCKFOUR

	
	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif


    int t;
    cin>>t;


    while(t--){

        ll n;
        cin>>n;

        ll cnt=0;

        while(n){
            if(n%10==4) cnt++;

            n/=10;
        }
        cout<<cnt<<endl;
    }

	return 0;





//FLOW010

	IOS;
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif


    int t;
    cin>>t;


    while(t--){

        string B="BattleShip";
        string C="Cruiser";
        string D="Destroyer";
        string F="Frigate";

        char n;
        cin>>n;

        if(n=='B' or n=='b')
            cout<<B<<endl;
        if(n=='C' or n=='c')
            cout<<C<<endl;
        if(n=='D' or n=='d')
            cout<<D<<endl;
        if(n=='F' or n=='f')
            cout<<F<<endl;
    }

	return 0;






//AVGPROBLEM

/* BISSMILLAHIR RAHMANIR RAHIM*/ 

#include<bits/stdc++.h>

#define int long long int
using namespace std;
int MOD = 1e9+7;

#define pb push_back



int power(int a, int b, int m) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// void bruteforce(int n){
//     cout<<n<<' ';
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     if(n&1){
//         return bruteforce(n=n*3+1);
//     }else{
//         return bruteforce(n>>=1);
//     }
// }


int32_t main(){


   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout);
   #endif


   int t;
   cin>>t;

   while(t--){
         double a,b,c;
   cin>>a>>b>>c;

   if((double)(a+b)*0.5>c)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
   }
   return 0;
}



//






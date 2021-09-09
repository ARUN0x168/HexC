/*Cap->UCap buffer shift algorithm and POC*/

#include <iostream>

#define _AUTHOR_ Winters0x168

int main()
{
	/*Had to flush the buffer manually due to unsynced I/O stream*/
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout<<"F and L"<<char(0x0A)<< std::flush;
	std::string _0xf,_0xl;
	int _c;
	std::cin>>_0xf;
	std::cin>>_0xl;

	for(uint8_t _0xi=0x0;_0xi<_0xf.length();_0xi++)
	{
		if(int(_0xf[_0xi])>=0x41&&int(_0xf[_0xi])<=0x5a)
		{
			_0xf[_0xi]=char(int(_0xf[_0xi])+0x20);
		};
		for(uint8_t _0xj=0x0;_0xj<_0xl.length();_0xj++)
		{
			if(int(_0xl[_0xj])>=0x41&&int(_0xl[_0xj])<=0x5a)
			{
				_0xl[_0xj]=char(int(_0xl[_0xj])+0x20);
			};
		};
	};
	std::cout<<"1)cC"<<char(0x0A)<<"2)s_s"<<char(0x0A) <<"3)PC"<<char(0x0A)<<std::flush;
	std::cin>>_c;
	if(_c==0x1)
	{
		_0xl[0]=char(int(_0xl[0])-0x20);
		std::cout<<_0xf<<_0xl<<char(0x0A)<< std::flush;
		std::cin>>_c;
	}
	else if(_c==0x2)
	{
		std::cout<<_0xf<<"_"<<_0xl<<char(0x0A)<<std::flush;
		std::cin>>_c;
	}
	else if(_c==0x3)
	{
		_0xf[0]=char(int(_0xf[0])-0x20);
		_0xl[0]=char(int(_0xl[0])-0x20);
		std::cout<<_0xf<<_0xl<<char(0x0A)<<std::flush;
		std::cin>>_c;
	}
	else{std::cout<<"Nah man that's not valid"<<char(0x0A)<<std::flush;std::cin>>_c;}
}//Rust will never reach the legacy of C++, How about a more modern version of C++?Now this sounds octastic.POC is just a case convention converter lol
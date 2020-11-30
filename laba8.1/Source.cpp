#include<iostream>	

using namespace std;
int Perevirka(char* a)
{
	if (strlen(a) < 3)
		return 0;

	int kilkist=0;
	for (int  i= 1; a[i+1] != 0; i++)
		if (a[i-1]==','&& a[i+1]=='-')
				kilkist++;
	return kilkist;



}
char* Zamina(char* a,const size_t size)
{
	if (strlen(a) < 3)
		return a;
	char* tmp = new char[strlen(a) * 4 / 3 + 1];
	char* t = tmp;

	tmp[0] = '/0';
	int i = 0;

	while (a[i+2]!=0)
	{
		if (a[i] == ',' && a[i + 2] == '-')
		{
			strcat_s(t, size, "**");
			t += 4;
			i += 3;
		}
		else
		{
			*t++ = a[i++];
			*t = '/0';
		}
		*t++ = a[i++];
		*t++ = a[i++];
		*t = '\0';

		strcpy_s(a,size, tmp);
		return tmp;

	}
}
int Perevirka1(char* a,int i)
{
	if (strlen(a) < 3)
		return 0;
	if (a[i] == ',' && a[i + 2] == '-')
		return 1+ Perevirka1(a, i + 1);
	if (a[i + 1] != 0)
		return Perevirka1(a, i + 1);
	else
		return 0;
}

int main()
{
	const size_t size = 101;
	char a[size];

	cout << "Vvedit shos: ";
	cin.getline(a, 102);

	
	cout << "Kilkist iter: " << Perevirka(a) << endl;
	 
	cout<<"Kilkist rek: " << Perevirka1(a, 0) << endl;

	char* dest = new char[151];
	dest = Zamina(a,size);

	cout << "zamina: " << dest << endl;

	return 0;
}
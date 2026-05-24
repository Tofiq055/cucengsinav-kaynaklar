
#include<windows.h>
#include<stdio.h>
int WINAPI WinMain(HINSTANCE hinst,HINSTANCE hprevinst,LPSTR cmd_line,int show_cmd)
{
	
	STARTUPINFO sai={0};
	PROCESS_INFORMATION pi ;
	char sz[128];
	
	MessageBox(NULL,"not defteri baþlatýlýyo...","mesaj",MB_OK);
	
	//NOT DEFTERÝ PROSESÝ OLUÞTURULUYO
	
	sai.cb=sizeof(sai);
	CreateProcess(NULL,"not defteri.exe",NULL,NULL,FALSE,0,NULL,NULL,&sai,&pi);
	
	//ekrana ebeveyn ve yeni prosesin pid leri basýlýyo...
	
	sprintf(sz,"ebeveyn PID :%d\Not defteri  PID:%d",GetProcessId(GetCurrentProcess()),pi.dwProcessId);
	
	MessageBox(NULL,sz,"process ýd",MB_OK);
	
	//not defteri prosesi sonlanýncaya kadar bekleniyo
	
	WaitForSingleObject(pi.hProcess,INFINITE);
	MessageBox(NULL,"not defteri kapatýlýyo...","mesaj",MB_OK);
    //handle deðiþkenkeri kapatýþýyo
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);
			
	
	return 0 ;
}

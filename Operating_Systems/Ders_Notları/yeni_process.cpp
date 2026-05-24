#include<windows.h>
#include<stdio.h>
int main()
{
	STARTUPINFO sai={0};
	PROCESS_INFORMATION pi ;
	DWORD exit_code;

	sai.cb=sizeof(sai);
	
	CreateProcess("c:\\windows\\notepad.exe",NULL,NULL,NULL,FALSE,0,NULL,NULL,&sai,&pi);
	
	printf("yeni oluþ. proses PID:%d\n",pi.dwProcessId);
    printf("ebeveyn . proses PID:%d\n",GetCurrentProcessId());	
   /*
    Sleep(3000);
    TerminateProcess(pi.hProcess,-1);
   
    WaitForSingleObject(pi.hProcess,INFINITE);
  
    if(GetExitCodeProcess(pi.hProcess,&exit_code))
         printf("sonlanma degeri : %d \n",exit_code);
    */
    printf("hata kodu : %d...\n",GetLastError());
    
   return 1 ;	
}

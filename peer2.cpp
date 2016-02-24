#include "server.cpp"
#include "client.cpp"
#include <unistd.h>
int main(int argc , char *argv[]){
	pid_t pid;
	pid=fork();
	if(pid==0)
		int c = Client(8000);
	else if(pid)
		int s = Server(8001);
	return 0;
}
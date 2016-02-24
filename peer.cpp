#include "server.cpp"
#include "client.cpp"
#include <unistd.h>
int main(int argc , char *argv[]){
	pid_t pid;
	int port = 8000;
	pid=fork();
	if(pid==0)
		int c = Client(port);
	else if(pid)
		int s = Server(port);
	return 0;
}
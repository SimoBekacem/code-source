 int main(int argc, char *argv[]) 
{ pid_t  x,y,z;

x=fork(); 
Printf(« x=%d »,x) ;
y=fork(); 
Printf(« y=%d »,y) ;

z=fork(); 
Printf(« z=%d »,z) ;

sleep(10); 
exit(0); } 

#include <stdio.h>

int magic(int n, int kvadrat[n][n]);

int main(){

int i,n,k;

scanf("%d",&n);

int kvadrat[n][n];

for(i=0;i<n;i++){

for(k=0;k<n;k++){

scanf("%d",&kvadrat[i][k]);

}

}

if(magic(n,kvadrat)){

printf("Magicheski e \n");

}else{

printf("ne e Magicheski \n");

}

return 0;

}

int magic(int n,int kvadrat[n][n]){

int i,a,b,k;

a=0;
b=0;

for(i=0;i<n;i++){

a+=kvadrat[0][i];

}


for(i=0;i<n;i++){


for(k=0;k<n;k++){

b=b+kvadrat[i][k];

}

if(b==a){

b=0;

}else{

 return 0;

}

}

for(i=0;i<n;i++){


for(k=0;k<n;k++){

b=b+kvadrat[k][i];

}

if(b==a){

b=0;

}else{

 return 0;

}

}

for(i=0;i<n;i++){

b=b+kvadrat[i][i];

}
if(b==a){

b=0;

}else{

 return 0;

}

for(i=0;i<n;i++){

b=b+kvadrat[i][n-(i+1)];

}
if(b==a){

b=0;

}else{

 return 0;

}

return 1;

}

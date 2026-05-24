

x1=1;
x2=1;
x3=1;
format("v",15);
for i=1:20
J=[x2 x1 -2*x3 ;x2*x3-2*x1 x1*x3+2*x2 x1*x2; exp(x1) -exp(x2) 1 ];
f=[x1*x2-x3^2-1; x1*x2*x3+x2^2-x1^2-2  ;exp(x1)+x3-exp(x2)-3];
h=-inv(J)*f;
x=[x1;x2;x3]+h;
x1=x(1);
x2=x(2);
x3=x(3);
i
x

end

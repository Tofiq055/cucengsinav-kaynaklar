//y=2.3x*x-20x+50
//a=1, b=9
//m=(f(b)-f(a))/(b-a)=3
//y1=32.3+3*(x-1)
//y2=3*x-7.5
i=-2.5:0.001:4;
y=tanh(i);
k=2.5:0.001:6;

c=1.2;
b=sech(c);
b=b*b;
b1=(b*c-tanh(c))/b;
y1=tanh(c)+b*(i-c);

c=b1;
b3=sech(c);
b3=b3*b3;
b2=(b3*c-tanh(c))/b3;
y2=tanh(c)+b3*(i-c);

//plot(i,y);
//plot(i,y1);
//plot(i,y2);
plot(i',[y' y1' y2' ]);
//plot(k,y1,'red')

//plot(k',y');
//plot(i',[y' y1' y2' y3']);
xtitle("tanh(x)" )
xgrid;
a=get("current_axes");
a.title.font_size = 5;
a.labels_font_size=5;
a.font_size=5;
a.thickness = 3;
a.font_style=5;
a.title.font_style = 5;

//a.data_bounds=[0,0;1,1];

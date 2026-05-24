//y=2.3x*x-20x+50
//a=1, b=9
//m=(f(b)-f(a))/(b-a)=3
//y1=32.3+3*(x-1)
//y2=3*x-7.5
i=0:0.0001:4;
j=-4:0.0001:0;
k=0:0.0001:8+0.0001;
//y=(ones(1,6001));
y1=tanh(i)-1;
y2=1+tanh(j);
y=[y1,y2];
plot(k',y');
//plot(i',[y' y1' y2' y3']);
xtitle("f(x)" )
xgrid;
a=get("current_axes");
a.title.font_size = 5;
a.labels_font_size=5;
a.font_size=5;
a.thickness = 3;
a.font_style=5;
a.title.font_style = 5;

//a.data_bounds=[0,0;1,1];

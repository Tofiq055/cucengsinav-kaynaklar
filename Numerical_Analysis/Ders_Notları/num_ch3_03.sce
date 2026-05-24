//y=2.3x*x-20x+50
//a=1, b=9
//m=(f(b)-f(a))/(b-a)=3
//y1=32.3+3*(x-1)
//y2=3*x-7.5
i=0:0.001:6;
y=-4+i.*i;
k=2.5:0.001:6;
y1=-29+10*k;

plot(i,y);
plot(k,y1,'red')

//plot(k',y');
//plot(i',[y' y1' y2' y3']);
xtitle("f(x)=x*x -4" )
xgrid;
a=get("current_axes");
a.title.font_size = 5;
a.labels_font_size=5;
a.font_size=5;
a.thickness = 3;
a.font_style=5;
a.title.font_style = 5;

//a.data_bounds=[0,0;1,1];

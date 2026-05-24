//y=2.3x*x-20x+50
//a=1, b=9
//m=(f(b)-f(a))/(b-a)=3
//y1=32.3+3*(x-1)
//y2=3*x-7.5
i=0:0.001:1;
y=(ones(1,1001));
y1=i;
y2=i.*i;
y3=i.*i.*i;

plot(i',[y' y1' y2' y3']);
xtitle("y=1,   y1=x,  y2=x*x,  y3=x*x*x" )
xgrid;
a=get("current_axes");
a.title.font_size = 5;
a.labels_font_size=5;
a.font_size=5;
a.thickness = 3;
a.font_style=5;
a.title.font_style = 5;

a.data_bounds=[0,0;1,1];

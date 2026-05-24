//y=2.3x*x-20x+50
//a=1, b=9
//m=(f(b)-f(a))/(b-a)=3
//y1=32.3+3*(x-1)
//y2=3*x-7.5
i=0.0002:0.000001:0.005;
j=-0.005:0.000001:-0.0002;
k=-0.005+0.0002:0.000001:0.000001+0.005-0.0002;
k=k*2000;
//y=(ones(1,6001));
y1=-0.001./i;
y2=-0.001./j;
y=[y2,y1];
//plot(y);
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

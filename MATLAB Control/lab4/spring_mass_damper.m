function ydot=spring_mass_damper(t,y)
k=0.3;
c=0.3;
m=1;
ydot=[y(2)
    -(k/m)*y(1)-(c/m)*y(2)+(1/m)];
end

function ydot=spring_mass_damper_3(t,y)
k=0.3;
c=0.3;
m=1;
ydot=[y(2)
    -(k/m)*y(1)-(c/m)*y(2)+(0.5*t.^2/m)];
end

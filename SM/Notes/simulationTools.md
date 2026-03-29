simulation toold are the software system used to model, analize and immatiare real world ssyem

they let to expirement with in the virtual env, instedf of directly intracting with real one

GPSS: General purpose simulation system
Dicreate event simulation language developed to model system where event occurs in specific point in time the key concept fo gpss includes:
1. transections
    It represent entities moving through the system
        eg: sustomer job, packet
2. Blocks:
it's a predefined operatioon that control the flow of transections

3. Facilities: resource used by transectoins
4. Queue: Wating lines, where transection stays before gettign service

Gpss block:
GENERATE block
    this block will produce a flow of transection with interarrivals time, deteermined by the attributes value, the level is optimal. The distrution of interalival tiem follow a uniform probability  distrubution
systex:
GENERATE A,B,C,D,E
sysmol:

      -------
 |a,b| C,D,E 
      --------

where a= average value of unifirm distrubution, 
b= half width of uniform distrubution
c=  TIme delay before the 1st transection is generated
d= max num of transection generated
e= prority aloocated to the 

EG: GENERATE 18,6
 
QUEUE BLOCK:
This block wil instruct GPSS to start gathering queue statstics on the queue named inits attribute value thsi lvl is optimal but may be necesarry if you have to refer to this line somewhere else in the porgram
Systex ---------> QYEUE A
SYMBOL
EG:

DEPARD BLOCK:

this block instruct the GPSS that a trensection is leavign the queue name in its attribute value

SEIZE BLOCK:

Thsi block allows a transection to seize a facility if it is free, it may be car seizig facility such as a petrol pump.or sustomer in supper martet seizing a facility such as a checkou assicent. when the car ot the customer is beeing serviced by facility is is sayed to be own the facility

RELEASE BLOCK: the transection entering inform GPSS the it's giving the owonership of the facility named in its attribute value

enter block
this block instrict the GPSS that a tranction is entured the stirage, the name of the storage is given byt he1st attribute, the 2nd sttribut e value gives the amiunt of storage imcremented when the transection entres the enter block

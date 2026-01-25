# Three Step Validation Process

- Build the model having high face validity
- VAlidaet model assumptions
- compare the model input output tranformations to crossponding i/o tranformations to real system
This outlines in 1 scentense as build the wirht model -> build the model right -> check result reality

1. Face validity

- Build a resonable model on its face to model users who are knowlagable aboout the real system being simulated
- The users of the model shall be involved in model construction from its conpusilization to its implemention to insure that a high de  gree fo realism is build into a model1
- Face validity checks wether the simulation model looks resonable to exports and matches real world behavior at 1st glance
- Model logic, flow & structure are reviewed by domain exports 
- No stastical testing, completly based on experiance and intusion 
This step validation ans simple qtn: Does the model make scence ?

A bank queue simulation show to bank managers to conform  that cosutomer, service process and rating lines behave relistacally

2. Validation of th emodel Assumptions

- model assumptions(MA) falls in to 2 catagories
    - Structual assumptionns
    - Data assumptions

- Structial assumptions deals with qth, how the syste, operates, wot kin of model shall be used ?, queuing realibity
- Data assumptions: It deals with qts as, wot kin of input data model is ?, wot'r the paramater value to input data model
    The steps verfies  wether the assumptions made while building the model are valid and realistic, it checks the assumptions about arival distribution, service time distribuion, resource avaibliity, and systems constrants

3. Validation i/o transformation

 - Inthis step of validation, we view the model as blackbox, and feed the input at one end to sxamine the output at other 
 - If they feed closly, the black box seems working fine, otherwise something in wrong
 - This steps check wether the model correctly tenasforms input data into a realistic outpt, this compare th esimulation output with
    1. real syste output
    2. Historical data

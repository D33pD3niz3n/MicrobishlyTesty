#include <cstdlib>
#include <iostream>
using namespace std;
int many;
int thismani=104;       //get back to this
int species[104];
bool tspecies[104];

int main(int argc, char** args){
    bool lol=true;
    while(lol==true){
int g=0;
for(int p=0;p<4;p++){cin >> many;}
cout << "p";
cin >> many;
for(int t=0;t<many;t++){tspecies[t]=true;}
for(int h=0;h<thismani;h++){species[h]=h;}
int sign=-1;
/*for(int i=0;i<many;i++){
    if(sign==-1){sign=1;}
    else{sign=-1;}
        bool swonk=rand()&1;
        int where=rand()%thismani;
        int electron=rand()%thismani/where;
        if(swonk==true){species[i]=thismani/where+sign*electron;}
        if(swonk==false){species[i]=thismani-(thismani/where+sign*electron);}
}
int speciesII[many];
for(int a=0;a<many;a++){speciesII[a]=species[a];}
for(int b=0;b<many;b++){
    for(int j=0;j<many;j++){
        if(b=!j){
            if(species[b]==speciesII[j]){
                species[b]++;
                if(species[b]==many){species[b]=0;}
                b=-1;j=many;
            }
        }
    }
}*/
bool checker=false;
for(int c=0;c<many;c++){tspecies[c]=false;}
while(checker==false){
    checker=true;
    for(int d=0;d<many;d++){
        if(tspecies[d]==false){checker=false;break;}
    }
    if(checker==false){
        string genome="potato";
        string clue;
        int number;
while(genome=="potato"){
    number=rand()%many;
    if(tspecies[number]==false){
        if(species[number]==0){clue="nitrogen fixing, root nodule, alphaproteobacteria";genome="Rhizobiales";}
        if(species[number]==1){clue="instracellular, human pathogen, trench fever causer";genome="Bartonella.Quintana";}
        if(species[number]==2){clue="pink, large, facultative methylotroph";genome="Methylobacterium";}
        if(species[number]==3){clue="oligotroph, obligate aerorobe, chemoorganotroph";genome="Peligabacter.Ubique";}
        if(species[number]==4){clue="intracellular parasites & mutualists";genome="Rickettsiales";}
        if(species[number]==5){clue="Rickettsiales that lives in arthropods\n causes typhus";genome="Rickettsia.Prowazekii";}
        if(species[number]==6){clue="Rickettsiales that lives in arthropods\n causes spotted fever";genome="Rickettsia.Rickettsii";}
        if(species[number]==7){clue="Rickettsiales that parasite insects\n colonizes eggs, vacuole multiplier\n feminizing";genome="Wolbachia.Pipientis";}
        if(species[number]==8){clue="obligate aerobes, with a versetile metabolism\n may catabolize contaminants";genome="Sphingomonas";}
        if(species[number]==9){clue="Betaproteobacteria, nitrogen fixer, bioremedier\n opportunistic pathogen anti-fungal&-nematodal\n lung infectant, plant infectant";genome="Burkholderia.Cepacia";}
        if(species[number]==10){clue="purple non-sulfur bacteria, photoheterotroph, in family Rhodocyclales";genome="Rhodocyclus";}
        if(species[number]==11){clue="wastewater treater, flocculates, forms gelatinous capsules\n aerobic chemoorganotrophs";genome="Zoogloea.Ramigera";}
        if(species[number]==12){clue="chemoorganotroph, cocci, saprophyte, Betaproteobacteria\n inflames brain";genome="Neisseria.Meningitidis";}
        if(species[number]==13){clue="Betaproteobacteria, chemoorganotroph, cocci, saprophyte\n causes Gonorrhea";genome="Neisseria.Gonorrhoeae";}
        if(species[number]==14){clue="Betaproteobacteria, rod, facultative aerobe, chemoorganotroph\n purple, pusforming, produces violacein";genome="Chromobacterium.Violaceum";}
        if(species[number]==15){clue="Betaproteobacteria, Hydrogenophilales, obligate aerobe, chemolithotroph\n Calvin cycle";genome="Hydrogenophilus.Thermolutelus";}
        if(species[number]==16){clue="Betaproteobacteria, chemoorganotrophs&chemolithotrophs, sulfur, calvin cycle";genome="Thiobacillus";}
        if(species[number]==17){clue="Betaproteobacteria, obligate&facultative methylotrophs, chemoorganotrophs";genome="Methylophilus";}
        if(species[number]==18){clue="Betaproteobacteria, obligate chemolithotrophs, ammonia oxidizing";genome="Nitrosomonadales";}
        if(species[number]==19){clue="Gammaproteobacteria, facultative aerobes, g-negative, non-sporulating \n rods, oxidase negative & catalase positive";genome="Enterobacteriales";}
        if(species[number]==20){clue="Enterobacteriales, intestinal tract dweller, vitamin syntheziser, model bacteria";genome="Escherichia.Coli";}
        if(species[number]==21){clue="Enterobacteriales, g-negative, non-sporulating, facultatively aerobe \n nonmotile, causes shigellosis";genome="Shigella.Dysenteriae";}
        if(species[number]==22){clue="Enterobacteriales, highly motile";genome="Proteus";}
        if(species[number]==23){clue="Enterobacteriales, pathogen, citrate-positive, indole-negative";genome="Enterobacter.Aerogenes";}
        if(species[number]==24){clue="Enterobacteriales, nitrogen fixer, may cause pneumonia";genome="Klebsiella.Pneumoniae";}
        if(species[number]==25){clue="Enterobacteriales, human pathogen, hospital aquired infectant";genome="Serratia.Marcescens";}
        if(species[number]==26){clue="Gammaproteobacteria, chemoorganotrophs, respiratory, plant pathogens";genome="Pseudomonadeles";}
        if(species[number]==27){clue="Pseudomonadeles, antibiotic resistant";genome="Pseudomonas.Aeruginosa";}
        if(species[number]==28){clue="Pseudomonadeles, chloratic lesion";genome="Pseudomonas.Syringae";}
        if(species[number]==29){clue="Pseudomonadeles, soft rot";genome="Pseudomonas.Marginales";}
        if(species[number]==30){clue="Pseudomonadeles, facultative aerobe, rod, curved, fermentive, pathogen";genome="Vibrionales.Cholerae";}
        if(species[number]==31){clue="Pseudomonadeles, facultative aerobe, rod, curved, fermentive, gastroenteritis";genome="Vibrionales.Parahaemolyticus";}
        if(species[number]==32){clue="Deltaproteobacteria, propionate oxidizers, fermenters, sulfate reducers";genome="Wolinii";}
        if(species[number]==33){clue="Epsilonproteobacteria, g-negatives, oxidase&catalase-positive, spirrila\n microaerophilic, gastroenteritis";genome="Campylobacter";}
        if(species[number]==34){clue="Epsilonproteobacteria, g-negatives, oxidase&catalase-positive, spirrila\n Gastritis";genome="Pylori";}
        if(species[number]==35){clue="Epsilonproteobacteria, free-living, microaerophilic, anaerobic respirators";genome="Sulfurospirrilum";}
        if(species[number]==36){clue="Firmicutes, lactic acid bacteria, aerotolerant anaerobes";genome="Lactobacillales";}
        if(species[number]==37){clue="Lactobacillales, acidophilus milk production";genome="Lactobacillus.Acidophilus";}
        if(species[number]==38){clue="Lactobacillales, yogurt preparer";genome="Lactobacillus.Delbrueckii";}
        if(species[number]==39){clue="Lactobacillales, homofermentives, coccoids";genome="Streptococcus";}
        if(species[number]==40){clue="Lactobacillales, obligate anaerobes, protein fermenters";genome="Peptococcus";}
        if(species[number]==41){clue="Lactobacillales, homofermentive, coccoid, strep throat agent";genome="Streptococcus.Pyogenes";}
        if(species[number]==42){clue="Lactobacillales, homofermentive, coccoid, causes dental caries";genome="Streptococcus.Mutans";}
        if(species[number]==43){clue="Lactobacillales, g-positive, catalase-positive, obligate aerobe";genome="Listeria.Monocytes";}
        if(species[number]==44){clue="Lactobacillales, facultative aerobe, catalase-positive, inhabits epidermis & mucous";genome="Staphylococcus.Epidermitis";}
        if(species[number]==45){clue="Lactobacillales, facultative aerobe, catalase-positive, yellow pigmented";genome="Staphylococcus.Aureus";}
        if(species[number]==46){clue="Firmicutes, obligate anaerobe, catalase-negative, acidophile, cellulose wall\n stomache dweller";genome="Sarcina.Ventriculi";}
        if(species[number]==47){clue="Firmicutes, sporulating bacterias";genome="Bacillales";}
        if(species[number]==48){clue="Bacillales, insect killa";genome="Bacillus.Thuringiensis";}
        if(species[number]==49){clue="Firmicutes, sporulating, fermenting";genome="Clostridium";}
        if(species[number]==50){clue="Clostridium, nitrogen fixers";genome="Pasteurianum";}
        if(species[number]==51){clue="clostridium, cellulose fermenters";genome="Cellulolyticum";}
        if(species[number]==52){clue="Clostridium, aminoacid fermenters";genome="Sporogenes";}
        if(species[number]==53){clue="Firmicutes, sporulating, coccis, strict aerobes";genome="Sporosarcina";}
        if(species[number]==54){clue="Sporosarcina, alkaliphiles";genome="Uraea";}
        if(species[number]==55){clue="Tenericutes, no cell walls";genome="Mollicutes";}
        if(species[number]==56){clue="Mollicutes, spiral, motile, no flagella, Citrus stubborn disease, cora stunt disease";genome="Spiroplasma.Citri";}
        if(species[number]==57){clue="Mollicutes, spiral, motile, no flagella, bee pathogen";genome="Spiroplasma.Melolontha";}
        if(species[number]==58){clue="class, rods, filamentous";genome="Actinobacteria";}
        if(species[number]==59){clue="Actinobacteria, g-positive, aerobic, non-motile, snapping divisor";genome="Coryneform";}
        if(species[number]==60){clue="Coryneform, pathogenic";genome="Coryneacterium.Diphtheriae";}
        if(species[number]==61){clue="coryneforms, propionic acid bacteria, aerobes";genome="Propionibacterium";}
        if(species[number]==62){clue="Actinobacterium, rods, waxy";genome="Mycobacterium";}
        if(species[number]==63){clue="Mycobacterium, lung pathogen";genome="Mycobacterium.Tuberculosis";}
        if(species[number]==64){clue="Mycobacterium, intracellular, acid-fast";genome="Mycobacterium.Leprae";}
        if(species[number]==65){clue="Actinobacterium, filamentous, mycelium forming, exo-sporulating";genome="Mycobacterium.Streptomyces";}
        if(species[number]==66){clue="Bacteriodetes, obligate anaerobes, fermenters";genome="Bacteriodales";}
        if(species[number]==67){clue="Bacteriodales, gut dweller, sphingolipid producer, degrades polysaccharides";genome="Bacteroides.Thetaiotaomicron";}
        if(species[number]==68){clue="Bacteriodetes, obligate aerobes, gliding motility";genome="Cytophagales";}
        if(species[number]==69){clue="Cytophagales, metaolize cellulose, fish pathogen";genome="Cytophaga.Columnaris";}
        if(species[number]==70){clue="Cytophagales, metabolize cellulose, fish pathogen, cold water disease";genome="Cytophaga.Psychrophila";}
        if(species[number]==71){clue="infant meningitis pathogen";genome="Flavobacterium.Meningosepticum";}
        if(species[number]==72){clue="Chlamydiae, obligate intracellular eukaryotic parasites";genome="Chlamydiales";}
        if(species[number]==73){clue="Chlamydiales, infects amoebas";genome="Parachlamydia.Acanthamoebae";}
        if(species[number]==74){clue="Chlamydiales, spread by inhalation, infects mammals and birds";genome="Chlamydophila.Psittaci";}
        if(species[number]==75){clue="Chlamydiales, the human chlamydia disease";genome="Chlamydophila.Trachomatis";}
        if(species[number]==76){clue="Chlamydiales, respiratory agent";genome="Chlamydophila.Pneumoniae";}
        if(species[number]==77){clue="g-negatiives, no peptidoglycan, S-layer membrane";genome="Planctomycetes";}
        if(species[number]==78){clue="Planctomycetes, anammox";genome="Brocadiales.anammoxidans";}
        if(species[number]==79){clue="Planctomycetes, stalked, facultative aerobe, filamentous, gliding";genome="Planctomyces.Isophaera";}
        if(species[number]==80){clue="Verruomicrobia, aerobics, methanotrophs";genome="Methylacidiphilum";}
        if(species[number]==81){clue="hyperthermophiles, rods, g-negatives, fermenters";genome="Thermotaga";}
        if(species[number]==82){clue="strict anaerobes, full sulfate reducers, have ether lipids";genome="Thermodesulfobacterium";}
        if(species[number]==83){clue="Aquificae, hyperthermophile, obligate chemolithotroph, microaerophilic, autotroph";genome="Aquifex.Aeolicus";}
        if(species[number]==84){clue="Aquificae, obligate aerobes";genome="Hydrogenobacter";}
        if(species[number]==85){clue="Aquificae, chemolithotroph";genome="Thermocrinis.Ruber";}
        if(species[number]==86){clue="g-negative but stain positive";genome="Deinococci";}
        if(species[number]==87){clue="Deinococci, source of Taq polymerase";genome="Thermus.Aquaticus";}
        if(species[number]==88){clue="Deinococci, radiation resistant, mutagen resistant";genome="Deinicoccales.Radiodurans";}
        if(species[number]==89){clue="Acidobacteria, encapsulated, obligate aerobes";genome="Capsalatum";}
        if(species[number]==90){clue="Acidobacterium, rod, chemoorganotroph, uses metals as electron acceptors, strict anaerobe";genome="Geothrix.Fermentans";}
        if(species[number]==91){clue="Acidobacterium, rod, strict anaerobe";genome="Holophaga.Foetida";}
        if(species[number]==92){clue="Acidobacterium, phototrophs";genome="Chloroacidobacter";}
        if(species[number]==93){clue="Nitrospirae, nitrite oxidizers";genome="Nitrospira";}
        if(species[number]==94){clue="Nitrospirae, aerobes, acidophilic, chemolithotroph";genome="Leptospirrillum";}
        if(species[number]==95){clue="Defirribacteres, anaerobes, chemoorganotrophs, thermophilic, dissimilative iron-reducers";genome="Defirribacter";}
        if(species[number]==96){clue="Defirribacteres, contain c type cytochromes";genome="Geovibrio";}
        if(species[number]==97){clue="chrysiogenttes, anaerobic, chemoorganotroph, respires using arsenate";genome="Chrysiogenes.Arsenatis";}
        if(species[number]==98){clue="Synergistetes, fermentive, g-negative, lives in human rumen";genome="Synergistes.Jonesii";}
        if(species[number]==99){clue="Fusobacteria, common family in humans";genome="Fusobacterium";}
        if(species[number]==100){clue="Fusobacterium, reside in human oral cavities";genome="Fusobacterium.Nucleatum";}
        if(species[number]==101){clue="Fibrobacteres, g-negative,fermentive, strict anaerobes";genome="Fibrobacter";}
        if(species[number]==102){clue="has 2 nuclei and mitosomes";genome="Diplomonads";}
        if(species[number]==103){clue="Diplomonads, parasite, giardiasis agent";genome="Giardia.Intestinalis";}
        if(species[number]==104){clue="Parabasalids, has hydrogenosomes, is STD";genome="Trichomonas.Vaginalis";}
    }
}
        cout << clue << endl;
        string answer;
        cin >> answer;
        if(answer==genome){cout << "correct \n";tspecies[number]=true;}
        else{cout << "wrong\n";}
        cout << genome << endl;
        bool cunt=false;
        while(answer!=genome){cin >> answer;}
    }}cout << "again?\n";char pyo; cin >> pyo; if(pyo=='y'){lol=true;}else{lol=false;}}
return 80085;
}

const float filter_bpre_coefs_western_800Q[231][3]={ // 96000 
//minorsecond: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{4.799652162703896e-05, 0.9999976001778853, -1.999993914321038}, //29.3333Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{9.599297270208763e-05, 0.9999952003533482, -1.999980456906973}, //58.6667Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0001919867341502008, 0.9999904007624579, -1.999931427737939}, //117.333Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.000383970286651485, 0.9999808015352502, -1.999744912036811}, //234.667Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.0007679300780128438, 0.9999616035208906, -1.999018114248539}, //469.333Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.001535831562612134, 0.9999232084342647, -1.996150205932429}, //938.667Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.003071550541366367, 0.9998464230926729, -1.984769292246519}, //1877.33Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.006142627130141214, 0.9996928689533405, -1.939615977712729}, //3754.67Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.012283342022365, 0.9993858330537818, -1.762725015802328}, //7509.33Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.02455935404928123, 0.9987720400401273, -1.108423374961123}, //15018.7Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//majorsecond: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{5.062130192597624e-05, 0.9999974689349033, -1.99999336890518}, //30.9375Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001012424757538579, 0.9999949378762125, -1.999978537794883}, //61.875Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002024844389986781, 0.9999898757780502, -1.999924275887734}, //123.75Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0004049668279871995, 0.9999797516586004, -1.99971735772897}, //247.5Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.0008099254560797723, 0.999959503727196, -1.998910007485226}, //495Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.001619818113198847, 0.9999190090943402, -1.995722210568475}, //990Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.003239505035861777, 0.9998380247482073, -1.983069123540141}, //1980Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.006478485352071997, 0.9996760757323964, -1.932887098803703}, //3960Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.01295487216551932, 0.999352256391724, -1.736700378364954}, //7920Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.02590135289540679, 0.9987049323552297, -1.017423588433361}, //15840Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//minorthird: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{5.399605084535984e-05, 0.9999973001974578, -1.999992635275363}, //33Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001079919559100146, 0.9999946004022047, -1.999975940760777}, //66Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002159833287079385, 0.9999892008335646, -1.999914562817543}, //132Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0004319643249769802, 0.9999784017837513, -1.999679856902548}, //264Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.0008639193202823575, 0.9999568040339858, -1.998762726534154}, //528Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.001727801322743036, 0.9999136099338629, -1.995138828912047}, //1056Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.003455453380607786, 0.9998272273309696, -1.980751726729211}, //2112Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.006910309753317161, 0.9996544845123341, -1.923722947712072}, //4224Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.01381823188759475, 0.9993090884056204, -1.701401001635133}, //8448Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.02762691659855944, 0.9986186541700721, -0.8961470598943002}, //16896Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//majorthird: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{5.624588314248077e-05, 0.9999971877058432, -1.99999212594187}, //34.375Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.00011249160808168, 0.9999943754195958, -1.999974128417794}, //68.75Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002249825834467239, 0.9999887508708273, -1.999907763501322}, //137.5Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0004499626360502857, 0.9999775018681976, -1.999653560771195}, //275Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.0008999151487685276, 0.9999550042425613, -1.99865935936836}, //550Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.001799789805177958, 0.999910010509741, -1.994729226302999}, //1100Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.00359941764818659, 0.9998200291175907, -1.979124665205974}, //2200Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.007198187505998055, 0.9996400906246999, -1.917294381524592}, //4400Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.01439378431684129, 0.999280310784158, -1.676737553727488}, //8800Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.02877720958232656, 0.9985611395208835, -0.8128880488705263}, //17600Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//perfectfourth: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{5.999572105867646e-05, 0.9999970002171206, -1.999991241044959}, //36.6667Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001199910033242581, 0.9999940004514205, -1.99997096389332}, //73.3333Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002399834644153351, 0.9999880009061117, -1.999895854978204}, //146.667Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0004799600330901287, 0.9999760020380116, -1.99960743154147}, //293.333Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.0009599089943266954, 0.9999520045701169, -1.998477871093058}, //586.667Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.001919784411969193, 0.999904011771013, -1.994009832599284}, //1173.33Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.003839371159686223, 0.9998080319377999, -1.976266987859402}, //2346.67Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.007677974054452359, 0.9996161015451455, -1.906015539069725}, //4693.33Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.01535300946181725, 0.9992323496508196, -1.633662263684189}, //9386.67Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.03069428673945427, 0.9984652918561682, -0.670392426589722}, //18773.3Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//tritone: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{6.428098388224885e-05, 0.9999967859513497, -1.999990174674783}, //39.2857Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.00012856176115908, 0.9999935719130295, -1.999967126892968}, //78.5714Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002571232516583055, 0.9999871438510169, -1.999881364540837}, //157.143Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0005142431976996083, 0.9999742878673143, -1.999551184535668}, //314.286Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.001028471060965765, 0.999948576477551, -1.998256369308369}, //628.571Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.002056898337458585, 0.9998971557630881, -1.993131386200312}, //1257.14Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.004113589595197158, 0.9997943212851584, -1.972778195837219}, //2514.29Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.008226287013077727, 0.9995886856918371, -1.892265590032785}, //5028.57Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.0164495056789292, 0.9991775438329353, -1.581494878409474}, //10057.1Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.03288490258769811, 0.9983557559322386, -0.5027580490861502}, //20114.3Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//perfectfifth: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{6.749504077299005e-05, 0.9999966252479611, -1.999989336311242}, //41.25Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001349898537795897, 0.9999932505073114, -1.99996409486276}, //82.5Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002699787964336946, 0.9999865010601782, -1.999869879725596}, //165Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0005399539484420848, 0.9999730023025777, -1.999506533713294}, //330Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.001079893319387914, 0.9999460053340307, -1.998080373756657}, //660Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.002159728330297569, 0.9998920135834857, -1.992433169318045}, //1320Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.004319223439257861, 0.9997840388280373, -1.97000590694496}, //2640Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.008637514093946978, 0.9995681242953028, -1.881355194363324}, //5280Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.01727129785539987, 0.99913643510723, -1.540361097365679}, //10560Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.03452768082431674, 0.9982736159587843, -0.3744391370603334}, //21120Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//minorsixth: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{7.199470206460592e-05, 0.9999964002648968, -1.999988107076301}, //44Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001439891449664632, 0.9999928005427516, -1.999959627916853}, //88Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002879772532829525, 0.9999856011373356, -1.999852912211811}, //176Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0005759503600308993, 0.9999712024819987, -1.999440468207364}, //352Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.00115188413411016, 0.9999424057932944, -1.997819780940844}, //704Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.002303701926374191, 0.999884814903681, -1.991399065524897}, //1408Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.004607138500625572, 0.9997696430749686, -1.965900608253717}, //2816Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.009213215715001442, 0.99953933921425, -1.865225913600167}, //5632Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.01842218726281002, 0.9990788906368593, -1.479989002785687}, //11264Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.03682740567645481, 0.9981586297161773, -0.1922092836785933}, //22528Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//majorsixth: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{7.499447192163067e-05, 0.9999962502789426, -1.999987251607693}, //45.8333Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001499887501071683, 0.999992500563764, -1.999956505948695}, //91.6667Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0002999769394361601, 0.9999850012164945, -1.999841025219958}, //183.333Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.000599949111810301, 0.9999700025761423, -1.999394120496986}, //366.667Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.001199877638571955, 0.9999400061339373, -1.997636850286963}, //733.333Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.00239970506704871, 0.9998800155399288, -1.990672922840802}, //1466.67Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.004799082051257825, 0.999760046294055, -1.963018905060899}, //2933.33Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.009597017002486314, 0.9995201493481608, -1.853922635942805}, //5866.67Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.01918955379038774, 0.9990405322223219, -1.437992446879094}, //11733.3Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.03836056192067465, 0.9980819768575215, -0.06972769887922146}, //23466.7Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//minorseventh: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{7.999412087440923e-05, 0.9999960002942208, -1.999985761788835}, //48.8889Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001599879217992652, 0.9999920006044388, -1.999951046769626}, //97.7778Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.0003199773126472717, 0.9999840012401439, -1.999820187563184}, //195.556Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0006399437049567411, 0.9999680028180579, -1.999312783537076}, //391.111Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.001279866933516854, 0.9999360066599351, -1.997315600777984}, //782.222Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.002559671598052097, 0.9998720177422252, -1.989397649621546}, //1564.44Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.00511897990637128, 0.9997440510459954, -1.957958705704099}, //3128.89Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.01023664961520369, 0.9994881676018577, -1.834114188441347}, //6257.78Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.02046845224322244, 0.9989765939069757, -1.364994654013545}, //12515.6Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.04091514354974928, 0.9979542433384765, 0.1347302950649954}, //25031.1Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}, //28160Hz
//majorseventh: 
	{4.499671915625447e-05, 0.999997750164042, -1.999994510633696}, //27.5Hz
	{8.436876537443832e-05, 0.9999957815617312, -1.999984392606803}, //51.5625Hz
	{8.999333708739178e-05, 0.9999955003331457, -1.999982542236833}, //55Hz
	{0.0001687371748505693, 0.9999915631412574, -1.999946007547341}, //103.125Hz
	{0.0001799862692379033, 0.9999910006865385, -1.999939168585815}, //110Hz
	{0.000337472926099569, 0.9999831263536949, -1.999800906822031}, //206.25Hz
	{0.0003599709187077813, 0.9999820014540647, -1.999774676670639}, //220Hz
	{0.0006749401578103384, 0.9999662529921095, -1.999237414218778}, //412.5Hz
	{0.0007199353584600718, 0.9999640032320768, -1.999134754544961}, //440Hz
	{0.001349857538407087, 0.9999325071230798, -1.997017732427136}, //825Hz
	{0.001439844801581978, 0.999928007759921, -1.996611760364314}, //880Hz
	{0.002699623971046232, 0.9998650188014477, -1.988214809368991}, //1650Hz
	{0.002879585945502869, 0.9998560207027247, -1.986602506088068}, //1760Hz
	{0.005398883543611151, 0.9997300558228197, -1.953268090379619}, //3300Hz
	{0.005758757290257835, 0.9997120621354871, -1.946877475516094}, //3520Hz
	{0.0107963096900325, 0.9994601845154986, -1.815796117902774}, //6600Hz
	{0.01151585641623928, 0.999424207179188, -1.790907776077773}, //7040Hz
	{0.02158679136491486, 0.9989206604317541, -1.298195121684203}, //13200Hz
	{0.02302508208502903, 0.9988487458957485, -1.208502182512338}, //14080Hz
	{0.04315028325177178, 0.9978424858374115, 0.3125314205066327}, //26400Hz
	{0.04602365644981905, 0.997698817177509, 0.5372208075587583}  //28160Hz
};
const float filter_bpre_coefs_western_2Q[231][3]={ // 96000 
//minorsecond: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.0009594694123643208, 0.9990405305876457, -1.999036846494611}, //29.3333Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.001918021509375465, 0.9980819784906293, -1.998067249148029}, //58.6667Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.003832351172674778, 0.9961676488275727, -1.996108788523216}, //117.333Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.007650047904045571, 0.992349952096078, -1.992114962624901}, //234.667Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.01524154034882889, 0.9847584596512328, -1.983822142518163}, //469.333Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.03025080788033068, 0.9697491921196997, -1.966033115123217}, //938.667Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.05958638128484683, 0.940413618716657, -1.925784560361684}, //1877.33Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1156225151448754, 0.8843774848558557, -1.827765020525341}, //3754.67Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.2178762083310073, 0.7821237916693398, -1.57117957770043}, //7509.33Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.3882831752566719, 0.6117168247592493, -0.8937810648609887}, //15018.7Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//majorsecond: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001011914988379212, 0.9989880850116204, -1.998983987051152}, //30.9375Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002022806004815553, 0.9979771939951846, -1.997960810459479}, //61.875Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.004041520265497645, 0.9959584797345027, -1.995893012074424}, //123.75Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.008066706644938713, 0.9919332933550614, -1.991671955107035}, //247.5Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.01606834153378098, 0.9839316584662189, -1.982890572976223}, //495Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.03187849146791616, 0.9681215085320839, -1.963991436560069}, //990Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.06274074471756194, 0.9372592552824381, -1.921015085172948}, //1980Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.12154508838741, 0.8784549116125902, -1.815714709197418}, //3960Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.2283169682637166, 0.7716830317362834, -1.538939714958749}, //7920Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.404505298530298, 0.595494701469702, -0.8121728816634227}, //15840Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//minorthird: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001079339568246264, 0.998920660431754, -1.998915998020883}, //33Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002157514162588821, 0.9978424858374114, -1.997823846274881}, //66Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.004310373457815016, 0.9956896265421852, -1.995615148982878}, //132Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.008602167596284059, 0.991397832403716, -1.991100568378884}, //264Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.01713033790521343, 0.9828696620947863, -1.981685786501143}, //528Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.03396722733368041, 0.9660327726663197, -1.961338881927986}, //1056Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.06678068213462271, 0.9332193178653772, -1.914779161757494}, //2112Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.12910170476288, 0.8708982952371199, -1.799855930743847}, //4224Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.2415361593530786, 0.7584638406469213, -1.496443024829773}, //8448Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.4247326024311214, 0.5752673975688786, -0.706323461906878}, //16896Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//majorthird: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001124286759983159, 0.9988757132400168, -1.998870654314367}, //34.375Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002247309499247289, 0.9977526905007524, -1.997732466192713}, //68.75Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.004489568598509601, 0.9955104314014903, -1.995429625376659}, //137.5Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.008958980970818363, 0.9910410190291816, -1.990718525395477}, //275Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.01783769860160167, 0.9821623013983984, -1.980878183295633}, //550Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.03535721371180078, 0.9646427862881989, -1.959553362131389}, //1100Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.0694642948621403, 0.9305357051378597, -1.910557337895528}, //2200Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1341033014635866, 0.8658966985364135, -1.789058577782907}, //4400Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.2502229074637394, 0.7497770925362606, -1.467486547981327}, //8800Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.4378343115078716, 0.5621656884921283, -0.635390028074991}, //17600Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//perfectfourth: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001199195341491617, 0.9988008046585162, -1.998795048930908}, //36.6667Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002396949348856373, 0.9976030506511477, -1.997580041632756}, //73.3333Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.004788166359014112, 0.9952118336411838, -1.995119907766779}, //146.667Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.009553373768361585, 0.9904466262317374, -1.990079811879652}, //293.333Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.01901551268886128, 0.9809844873111879, -1.979524334495679}, //586.667Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.03766930968845376, 0.9623306903139788, -1.956547248401521}, //1173.33Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.07391994554005429, 0.9260800544611401, -1.90340691047097}, //2346.67Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1423754520728976, 0.8576245479276793, -1.770670505893505}, //4693.33Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.2644803754903886, 0.7355196245098826, -1.418170788887018}, //9386.67Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.4590101738195894, 0.5409898261927222, -0.5169306232575283}, //18773.3Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//tritone: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001284795468841697, 0.9987152045311597, -1.998708597491044}, //39.2857Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002567940238286175, 0.9974320597617161, -1.997405648611384}, //78.5714Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.005129292670948058, 0.9948707073290861, -1.994765198627206}, //157.143Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.01023227569859115, 0.9897677243014761, -1.98934678021313}, //314.286Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.02035981987250413, 0.9796401801275718, -1.977965156407179}, //628.571Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.04030505466939852, 0.9596949453322672, -1.953065182209089}, //1257.14Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.07898591330673926, 0.9210140866950987, -1.895062239046358}, //2514.29Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1517327745145365, 0.8482672254855619, -1.74906594390938}, //5028.57Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.2804417723096051, 0.7195582277318736, -1.360295656919362}, //10057.1Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.4822376512815493, 0.5177623487205387, -0.3818475439934992}, //20114.3Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//perfectfifth: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.0013489923839944, 0.9986510076160054, -1.998643723583356}, //41.25Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002696164987537499, 0.9973038350124629, -1.997274718573865}, //82.5Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.005385060669434083, 0.994614939330566, -1.994498631217451}, //165Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.01074112246045445, 0.9892588775395452, -1.988794907885348}, //330Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.02136687320919831, 0.9786331267908015, -1.976787376739774}, //660Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.0422772031476592, 0.9577227968523411, -1.950421227888948}, //1320Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.08276704438933002, 0.9172329556106702, -1.888684064984612}, //2640Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1586837051417145, 0.8413162948582856, -1.732459091390878}, //5280Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.2921868920059261, 0.7078131079940739, -1.315892615911941}, //10560Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.4990006041517693, 0.5009993958482308, -0.2812592399429902}, //21120Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//minorsixth: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001438860479116338, 0.9985611395208838, -1.998552852283743}, //44Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002875650638754204, 0.9971243493612455, -1.997091224312546}, //88Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.005743031910912743, 0.9942569680890873, -1.994124659229387}, //176Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.01145308140629559, 0.9885469185937045, -1.988019215992222}, //352Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.0227749897388916, 0.9772250102611083, -1.975126496357155}, //704Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.04503127932017706, 0.9549687206798227, -1.946673555636917}, //1408Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.08803474252314278, 0.9119652574768572, -1.87958331883406}, //2816Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.168319369155169, 0.8316806308448309, -1.708642641377184}, //5632Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.3083073282775445, 0.6916926717224556, -1.252420083046553}, //11264Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.5215612478854512, 0.4784387521145489, -0.1422157626960112}, //22528Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//majorsixth: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001498766960416491, 0.9985012330395898, -1.998492241094938}, //45.8333Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.002995290881112103, 0.9970047091188911, -1.996968768276226}, //91.6667Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.005981596983243352, 0.9940184030169151, -1.99387485654706}, //183.333Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.01192744679838008, 0.988072553201699, -1.987500096937842}, //366.667Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.02371259766058509, 0.9762874023394542, -1.974011485125914}, //733.333Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.04686303280056328, 0.9531369672013741, -1.944145071201637}, //1466.67Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.09152962445892798, 0.9084703755420194, -1.873406478883387}, //2933.33Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1746818468477742, 0.8253181531526796, -1.692405371871464}, //5866.67Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.3188490544738257, 0.6811509455472688, -1.209321333303837}, //11733.3Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.5360349077142753, 0.4639650922952399, -0.05108845295509746}, //23466.7Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//minorseventh: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001598606376694797, 0.9984013936233058, -1.998391163281131}, //48.8889Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.003194657211042624, 0.9968053427889586, -1.996764454207334}, //97.7778Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.006379121594116482, 0.9936208784061468, -1.993457585916623}, //195.556Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.01271751768666245, 0.9872824823133458, -1.986631418997666}, //391.111Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.02527330011721411, 0.9747266998828022, -1.972139324365628}, //782.222Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.04990773617202676, 0.9500922638311968, -1.939878618127667}, //1564.44Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.09732498560796611, 0.9026750143921323, -1.862917960230873}, //3128.89Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1851778183923515, 0.8148221816078368, -1.664721585614433}, //6257.78Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.3360656814832613, 0.6639343185515947, -1.136212127911223}, //12515.6Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.5591897781046933, 0.4408102218962882, 0.09715977583507761}, //25031.1Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}, //28160Hz
//majorseventh: 
	{0.0008995305751479957, 0.9991004694248521, -1.999097231347892}, //27.5Hz
	{0.001685956043347459, 0.9983140439566525, -1.998302664578362}, //51.5625Hz
	{0.001798251995040575, 0.9982017480049598, -1.998188801530481}, //55Hz
	{0.003369069638914974, 0.9966309303610849, -1.996585451315302}, //103.125Hz
	{0.003593270279843708, 0.9964067297201568, -1.996354990509996}, //110Hz
	{0.006726788647598204, 0.9932732113524018, -1.99309160316468}, //206.25Hz
	{0.007173628968382158, 0.9928263710316179, -1.992619788024624}, //220Hz
	{0.01340832760968667, 0.9865916723903132, -1.985867707655663}, //412.5Hz
	{0.01429579698418819, 0.9857042030158116, -1.98488086689542}, //440Hz
	{0.02663687197008495, 0.9733631280299151, -1.970487076517676}, //825Hz
	{0.02838722415696337, 0.9716127758430366, -1.968343480294637}, //880Hz
	{0.052564220991819, 0.9474357790081809, -1.936090996001425}, //1650Hz
	{0.05596861381858907, 0.9440313861814109, -1.931147834504842}, //1760Hz
	{0.1023654446551615, 0.8976345553448385, -1.853544688876268}, //3300Hz
	{0.108804741904404, 0.891195258095596, -1.84122780449662}, //3520Hz
	{0.1942522050508742, 0.8057477949491261, -1.639877533636765}, //6600Hz
	{0.2057710119479237, 0.7942289880520762, -1.607112005154733}, //7040Hz
	{0.3507704909346209, 0.6492295090653789, -1.071088885933021}, //13200Hz
	{0.369200314537775, 0.630799685462225, -0.9859800463694947}, //14080Hz
	{0.5785010445587272, 0.4214989554412731, 0.2223714286112611}, //26400Hz
	{0.6020917568207582, 0.3979082431792417, 0.3759252339653893}  //28160Hz
};

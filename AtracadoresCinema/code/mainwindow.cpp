#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMainWindow"
#include "QFrame"
#include "QLabel"
#include "QPushButton"
#include <QIcon>
#include <QSize>
#include "QGraphicsDropShadowEffect"
#include "QDateTime"
#include <QFile>
#include <QTextStream>
#include <QStandardPaths>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:#0D0D0E");
    this->setWindowTitle("ATRACADORE CINEMA");
    this->showMaximized();

    Comingsoon();
    menu();
    wlist();


    spiderman.tittle = "Spider-Man: Brand New Day";
    spiderman.description = "Overview\nFour years have passed since the events of No Way Home, and Peter is now an adult living entirely alone, having voluntarily erased himself from the lives and memories of those he loves. Crime-fighting in a New York that no longer knows his name, he’s devoted himself entirely to protecting his city — a full-time Spider-Man — but as the demands on him intensify, the pressure sparks a surprising physical evolution that threatens his existence, even as a strange new pattern of crimes gives rise to one of the most powerful threats he has ever faced.";
    spiderman.producer = "Producer\nKevin Feige, Amy Pascal, Rachel O'Connor, Avi Arad";
    spiderman.cast = "Cast\nTom Holland, Zendaya, Sadie Sink, Jacob Batalon, Jon Bernthal, Tramell Tillman, Michael Mando, Mark Ruffalo, Liza Colón-Zayas, Marvin Jones III, Eman Esfandi, Keith David, Zabryna Guevara, Rosario Dawson";
    spiderman.banner = QPixmap(":/image/s.jpeg");

    odyssey.tittle = "The Odyssey ";
    odyssey.description = "Overview\nOdysseus, the legendary Greek king of Ithaca, embarks on a long and perilous journey home following the Trojan War, chronicling his encounters with mythical beings such as the Cyclops Polyphemus, the Sirens, and the witch-goddess Circe, while attempting to reunite with his wife, Penelope.";
    odyssey.producer = "Producer\nChristopher Nolan, Emma Thomas";
    odyssey.cast = "Cast\nMatt Damon, Tom Holland, Zendaya, Anne Hathaway";
    odyssey.banner = QPixmap(":/image/odyssey.jpeg");

    Moana.tittle = "Moana ";
    Moana.description = "Overview\nPrompted by a summons from the ocean, Moana departs her home island of Motunui for the first time and travels past its barrier reef. Accompanied by the demigod Maui, she undertakes a voyage aimed at recovering the well-being of her community.";
    Moana.producer = "Producer\nDwayne Johnson, Lin-Manuel Miranda, Dany Garcia, Hiram Garcia, Beau Flynn";
    Moana.cast = "Cast\nCatherine Laga‘aia, Dwayne Johnson, Rena Owen";
    Moana.banner = QPixmap(":/image/moana.jpeg");

    Toy.tittle = "Toy Story 5 ";
    Toy.description = "Overview\nWhen Bonnie receives a Lilypad tablet as a gift and becomes obsessed, Buzz, Woody, Jessie and the rest of the gang's jobs become exponentially harder when they have to go head to head with the all-new threat to playtime.";
    Toy.producer = "Producer\nLindsey Collins";
    Toy.cast = "Tom Hanks, Tim Allen, Joan Cusack";
    Toy.banner = QPixmap(":/image/toy.jpeg");

    Sanki.tittle = "Sanky Panky ";
    Sanki.description = "Overview\nGenaro gets a job at a resort in hopes of marrying an American woman and moving to New York in search of a better life. He meets a tourist called Martha and everything seems going according to plan, until her boyfriend shows up.";
    Sanki.producer = "Producer\nJosé Enrique Pinto";
    Sanki.cast = "Cast\nFausto Mata,Zdenka Kalina,Tony Pascual";
    Sanki.banner = QPixmap(":/image/sanki.jpg");

    duna.title = "Dune: Part Three";
    duna.Description = "Overview\nAs Emperor, Paul Atreides grapples with the consequences of his rise to power as political conspiracies and a galaxy-spanning holy war threaten the future he alone can foresee.";
    duna.Producer="Producer\nTanya Lapointe, Denis Villeneuve, Mary Parent, Cale Boyter";
    duna.Cast = "Cast\nTimothée Chalamet, Zendaya, Florence Pugh, Isaach de Bankolé, Jason Momoa, Javier Bardem, Rebecca Ferguson, Robert Pattinson, Anya Taylor-Joy, Nakoa-Wolf Momoa, Ida Brooke, Josh Brolin";
    duna.Banner = QPixmap(":/image/dune.jpeg");

    waterfal.title = "Whalefall";
    waterfal.Description = "Description\nFollowing the death of his father, Jay Gardiner goes diving off the central Coast of California in search of his remains, but is swallowed by a massive sperm whale. While trapped inside its belly with only one hour of oxygen left, Jay comes to realize that the hard-earned lessons his father imparted may be the key to his escape.";
    waterfal.Producer = "Producer\nBrian Grazer, Ron Howard, Allan Mandelbaum, Brian Duffield";
    waterfal.Cast = "Cast\nAustin Abrams, Josh Brolin, Elisabeth Shue, John Ortiz, Jane Levy, Emily Rudd";
    waterfal.Banner= QPixmap(":/image/water.jpeg");

    rubia.title= "Donde estan las rubias?";
    rubia.Description = "Description\nWhite Chicks is a 2004 American buddy cop comedy where two Black FBI agents go undercover as white women to protect socialite heiresses from a kidnapping plot.";
    rubia.Producer = "Producer\nKeenen Ivory Wayans";
    rubia.Cast = "Cast\nMarlon WayansShawn WayansBusy Philipps";
    rubia.Banner = QPixmap(":/image/rubias.jpeg");

    motores.title= "El roba motores";
    motores.Description = "Description\nLeo is a gifted street mechanic with a secret obsession: stealing high-performance motorcycle engines to build an unbeatable custom bike for La Vuelta Nocturna, the city's highest-stakes illegal street race. But when his latest heist accidentally strips the custom engine of a ruthless local crime boss, Leo finds himself hunted by both the cartel and the police. With his life on the line, he has one night to outrun his pursuers and prove his machine is the fastest thing on the asphalt.";
    motores.Producer = "Producer\nDarian Diaz,Alma Marcela Goso";
    motores.Cast = "Cast\nJan Luis Castellanos, Manny Pérez, Héctor Aníbal ,Stephany Liriano,Juan Fernández";
    motores.Banner = QPixmap(":/image/motor.jpeg");

    fores.title= "Forrest Gump";
    fores.Description = "Description\nThe history of the United States from the 1950s to the '70s unfolds from the perspective of an Alabama man with an IQ of 75, who yearns to be reunited with his childhood sweetheart.";
    fores.Producer = "Producer\nRobert Zemeckis";
    fores.Cast = "Cast\nTom Hanks,Robin Wright,Gary Sinise";
    fores.Banner = QPixmap(":/image/forest.jpg");




}





void MainWindow::menu(){

    menucontainer = new QFrame(this);
    menucontainer->setGeometry(0,0,1920,1080);
    menucontainer->show();



    QFrame *up = new QFrame(menucontainer);
    up->setGeometry(0,0,1600,125);
    up->setStyleSheet("background-color:#121212;border-bottom:1px solid #222222");
    up->show();

    QFrame *midle1 = new QFrame(menucontainer);
    midle1->setGeometry(0,155,605,5);
    midle1->setStyleSheet("background-color: white");
    midle1->show();

    QFrame *midle2 = new QFrame(menucontainer);
    midle2->setGeometry(615,155,1000,5);
    midle2->setStyleSheet("background-color: white");
    midle2->show();


    //home

    QLabel *logo = new QLabel(menucontainer);
    logo->setGeometry(-50,-5,300,150);
    logo->setStyleSheet("background-color: rgb(0,0,0,128)");
    logo->setPixmap(QPixmap(":/image/logo.png"));
    logo->setScaledContents(true);
    logo->show();

    QLabel *nowplaying = new QLabel("NOW PLAYING",menucontainer);
    nowplaying->setGeometry(600,130,318,50);
    nowplaying->setStyleSheet("color:white;backgroud-color: transparent;font-size:45px;font-weight: bold");
    nowplaying->show();

    QLabel *home = new QLabel("HOME",menucontainer);
    home->setGeometry(1000,50,200,100);
    home->setStyleSheet("background-color: transparent;color: #E0E0E0;font-size: 25px;font-weight: bold");
    home->show();
    QPushButton *homep = new QPushButton(menucontainer);
    homep->setGeometry(1000,90,75,25);
    homep->setStyleSheet("background-color:transparent;");
    homep->show();


    QLabel *comingsoon = new QLabel("COMING SOON",menucontainer);
    comingsoon->setGeometry(1100,50,200,100);
    comingsoon->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    comingsoon->show();
    QPushButton *comingsoonp = new QPushButton(menucontainer);
    comingsoonp->setGeometry(1100,90,180,25);
    comingsoonp->setStyleSheet("background-color:transparent;");
    comingsoonp->show();
    connect(comingsoonp,&QPushButton::clicked,sooncontainer,&QFrame::show);
    connect(comingsoonp,&QPushButton::clicked,menucontainer,&QFrame::hide);


    QLabel *watchlist = new QLabel("WATCHLIST",menucontainer);
    watchlist->setGeometry(1300,50,200,100);
    watchlist->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    watchlist->show();
    QPushButton *watchlistp = new QPushButton(menucontainer);
    watchlistp->setGeometry(1300,90,125,25);
    watchlistp->setStyleSheet("background-color:transparent;");
    watchlistp->show();
    connect(watchlistp,&QPushButton::clicked,this,[this](){
        menucontainer->hide();
        wlistcontainer->show();

    });


    QPushButton *epitelman = new QPushButton(menucontainer);
    epitelman->setGeometry(20,210,240,400 );
    QIcon epitelmanposter(":/image/s.jpeg");
    epitelman->setIcon(epitelmanposter);
    epitelman->setIconSize(QSize(250,400));
    epitelman->setStyleSheet("background-color:transparent");
    epitelman->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *peter = new QGraphicsDropShadowEffect(epitelman);
    peter->setBlurRadius(25);
    peter->setColor(QColor("white"));
    peter->setOffset(0,0);
    epitelman->setGraphicsEffect(peter);
    epitelman->show();
    QLabel *parker = new QLabel("Spider-Man: Brand New Day \nScience Fiction",menucontainer);
    parker->setGeometry(25,550,225,40);
    parker->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    connect(epitelman,&QPushButton::clicked,this,[this](){moviepanel(spiderman);});

    parker->show();

    QPushButton *odysei = new QPushButton(menucontainer);
    odysei->setGeometry(320,210,240,400);
    QIcon odiseifotico(":/image/odyssey.jpeg");
    odysei->setIcon(odiseifotico);
    odysei->setIconSize(QSize(240,400));
    odysei->setStyleSheet("background-color:transparent");
    odysei->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *odiseo = new QGraphicsDropShadowEffect(odysei);
    odiseo->setBlurRadius(25);
    odiseo->setColor("white");
    odiseo->setOffset(0,0);
    odysei->setGraphicsEffect(odiseo);
    QLabel *agraida = new QLabel("The Odyssey \nAdventure",menucontainer);
    agraida->setGeometry(325,550,100,40);
    agraida->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    agraida->show();
    odysei->show();
    connect(odysei,&QPushButton::clicked,this,[this](){moviepanel(odyssey);});

    QPushButton *toy = new QPushButton(menucontainer);
    toy->setGeometry(620,210,240,400);
    QIcon story(":/image/toy.jpeg");
    toy->setIcon(story);
    toy->setIconSize(QSize(250,400));
    toy->setStyleSheet("background-color:transparent");
    toy->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *woody = new QGraphicsDropShadowEffect(toy);
    woody->setBlurRadius(25);
    woody->setColor("white");
    woody->setOffset(0,0);
    toy->setGraphicsEffect(woody);
    QLabel *andy = new QLabel("Toy Story 5\nAnimation",menucontainer);
    andy->setGeometry(625,550,100,40);
    andy->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    andy->show();
    toy->show();
    connect(toy,&QPushButton::clicked,this,[this](){moviepanel(Toy);});

    QPushButton *moana = new QPushButton(menucontainer);
    moana->setGeometry(920,210,240,400);
    QIcon maoui(":/image/moana.jpeg");
    moana->setIcon(maoui);
    moana->setIconSize(QSize(250,400));
    moana->setStyleSheet("background-color:transparent");
    moana->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *pollo = new QGraphicsDropShadowEffect(moana);
    pollo->setBlurRadius(25);
    pollo->setColor("white");
    pollo->setOffset(0,0);
    moana->setGraphicsEffect(pollo);
    QLabel *cerdo = new QLabel("Moana\nAniamtion",menucontainer);
    cerdo->setGeometry(925,550,100,40);
    cerdo->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    cerdo->show();
    moana->show();
    connect(moana,&QPushButton::clicked,this,[this](){moviepanel(Moana);});

    QPushButton *sanki = new QPushButton(menucontainer);
    sanki->setGeometry(1220,210,240,400);
    QIcon panki(":/image/sanki.jpg");
    sanki->setIcon(panki);
    sanki->setIconSize(QSize(250,400));
    sanki->setStyleSheet("background-color:transparent");
    sanki->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *reymon = new QGraphicsDropShadowEffect(sanki);
    reymon->setBlurRadius(25);
    reymon->setColor("white");
    reymon->setOffset(0,0);
    sanki->setGraphicsEffect(reymon);
    QLabel *poso = new QLabel("Sanki Panki\nComedy",menucontainer);
    poso->setGeometry(1225,550,100,40);
    poso->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    poso->show();
    sanki->show();
    connect(sanki,&QPushButton::clicked,this,[this](){moviepanel(Sanki);});

}

void MainWindow::Comingsoon(){


    sooncontainer = new QFrame(this);
    sooncontainer->setGeometry(0,0,1920,1080);



    QFrame *up = new QFrame(sooncontainer);
    up->setGeometry(0,0,1600,125);
    up->setStyleSheet("background-color:#121212;border-bottom:1px solid #222222");
    up->show();

    QLabel *logo = new QLabel(sooncontainer);
    logo->setGeometry(-50,-5,300,150);
    logo->setStyleSheet("background-color: rgb(0,0,0,128)");
    logo->setPixmap(QPixmap(":/image/logo.png"));
    logo->setScaledContents(true);
    logo->show();
    QPushButton *logop = new QPushButton(sooncontainer);
    logop->setGeometry(10,-5,195,130);
    logop->setStyleSheet("QPushButton {"
                         "   background: transparent;"
                         "   border: none;"
                         "   padding: 0px;"
                         "}"
                         "QPushButton:focus {"
                         "   outline: none;"
                         "}"
                         "QPushButton:pressed {"
                         "   background: transparent;"
                         "}");
    logop->setCursor(Qt::OpenHandCursor);
    logop->show();
    connect(logop,&QPushButton::clicked,this,[this](){
        menucontainer->show();
        sooncontainer->hide();
    });


    QLabel *home = new QLabel("HOME",sooncontainer);
    home->setGeometry(1000,50,200,100);
    home->setStyleSheet("background-color: transparent;color: #E0E0E0;font-size: 25px;font-weight: bold");
    home->show();

    QPushButton *homep = new QPushButton(sooncontainer);
    homep->setGeometry(1000,90,75,25);
    homep->setStyleSheet("background-color:transparent;");
    homep->setCursor(Qt::OpenHandCursor);
    homep->show();
    connect(homep,&QPushButton::clicked,this,[this](){
        menucontainer->show();
        sooncontainer->hide();
    });



    QLabel *comingsoon = new QLabel("COMING SOON",sooncontainer);
    comingsoon->setGeometry(1100,50,200,100);
    comingsoon->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    comingsoon->show();
    QPushButton *comingsoonp = new QPushButton(sooncontainer);
    comingsoonp->setGeometry(1100,90,180,25);
    comingsoonp->setStyleSheet("background-color:transparent;");
    comingsoonp->setCursor(Qt::OpenHandCursor);
    comingsoonp->show();
    connect(comingsoonp,&QPushButton::clicked,this,[this](){
        sooncontainer->show();
        menucontainer->hide();
    });

    QLabel *watchlist = new QLabel("WATCHLIST",sooncontainer);
    watchlist->setGeometry(1300,50,200,100);
    watchlist->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    watchlist->show();
    QPushButton *watchlistp = new QPushButton(sooncontainer);
    watchlistp->setGeometry(1300,90,125,25);
    watchlistp->setStyleSheet("background-color:transparent;");
    watchlistp->setCursor(Qt::OpenHandCursor);
    watchlistp->show();
    connect(watchlistp,&QPushButton::clicked,this,[this](){
        sooncontainer->hide();
        wlistcontainer->show();

    });


    QFrame *midle1 = new QFrame(sooncontainer);
    midle1->setGeometry(0,155,605,5);
    midle1->setStyleSheet("background-color: white");
    midle1->show();

    QFrame *midle2 = new QFrame(sooncontainer);
    midle2->setGeometry(615,155,1000,5);
    midle2->setStyleSheet("background-color: white");
    midle2->show();


    QLabel *nowplaying = new QLabel("COMING SOON",sooncontainer);
    nowplaying->setGeometry(600,130,326,50);
    nowplaying->setStyleSheet("color:white;backgroud-color: transparent;font-size:45px;font-weight: bold");
    nowplaying->show();

    QPushButton *dune = new QPushButton(sooncontainer);
    dune->setGeometry(20,210,240,400 );
    QIcon duneposter(":/image/dune.jpeg");
    dune->setIcon(duneposter);
    dune->setIconSize(QSize(250,400));
    dune->setStyleSheet("background-color:transparent");
    dune->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *tinigan = new QGraphicsDropShadowEffect(dune);
    tinigan->setBlurRadius(25);
    tinigan->setColor(QColor("white"));
    tinigan->setOffset(0,0);
    dune->setGraphicsEffect(tinigan);
    dune->show();
    QLabel *dunu = new QLabel("Dune: Part Three  \nScience Fiction",sooncontainer);
    dunu->setGeometry(25,550,225,40);
    dunu->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    connect(dune,&QPushButton::clicked,this,[this](){soonpanel(duna);});

    QPushButton *whale = new QPushButton(sooncontainer);
    whale->setGeometry(320,210,240,400);
    QIcon whalefal(":/image/water.jpeg");
    whale->setIcon(whalefal);
    whale->setIconSize(QSize(240,400));
    whale->setStyleSheet("background-color:transparent");
    whale->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *fal = new QGraphicsDropShadowEffect(whale);
    fal->setBlurRadius(25);
    fal->setColor("white");
    fal->setOffset(0,0);
    whale->setGraphicsEffect(fal);
    whale->show();
    QLabel *agua = new QLabel("Whalefall \nThriller",sooncontainer);
    agua->setGeometry(325,550,100,40);
    agua->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    agua->show();
    connect(whale,&QPushButton::clicked,this,[this](){soonpanel(waterfal);});

    QPushButton *rubias = new QPushButton(sooncontainer);
    rubias->setGeometry(620,210,240,400);
    QIcon rubiasposter(":/image/rubias.jpeg");
    rubias->setIcon(rubiasposter);
    rubias->setIconSize(QSize(250,400));
    rubias->setStyleSheet("background-color:transparent");
    rubias->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *donde = new QGraphicsDropShadowEffect(rubias);
    donde->setBlurRadius(25);
    donde->setColor("white");
    donde->setOffset(0,0);
    rubias->setGraphicsEffect(donde);
    QLabel *needyou = new QLabel("Donde Estan Las Rubias\nComedy",sooncontainer);
    needyou->setGeometry(625,550,250,40);
    needyou->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    needyou->show();
    rubias->show();
     connect(rubias,&QPushButton::clicked,this,[this](){soonpanel(rubia);});


    QPushButton *roba = new QPushButton(sooncontainer);
    roba->setGeometry(920,210,240,400);
    QIcon robaposter(":/image/motor.jpeg");
    roba->setIcon(robaposter);
    roba->setIconSize(QSize(250,400));
    roba->setStyleSheet("background-color:transparent");
    roba->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *motor = new QGraphicsDropShadowEffect(roba);
    motor->setBlurRadius(25);
    motor->setColor("white");
    motor->setOffset(0,0);
    roba->setGraphicsEffect(motor);
    QLabel *book = new QLabel("El Roba Motores\nThriller",sooncontainer);
    book->setGeometry(925,550,150,40);
    book->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    book->show();
    roba->show();
     connect(roba,&QPushButton::clicked,this,[this](){soonpanel(motores);});


    QPushButton *forest = new QPushButton(sooncontainer);
    forest->setGeometry(1220,210,240,400);
    QIcon forestbaner(":/image/forest.jpg");
    forest->setIcon(forestbaner);
    forest->setIconSize(QSize(250,400));
    forest->setStyleSheet("background-color:transparent");
    forest->setCursor(Qt::PointingHandCursor);
    QGraphicsDropShadowEffect *gump = new QGraphicsDropShadowEffect(forest);
    gump->setBlurRadius(25);
    gump->setColor("white");
    gump->setOffset(0,0);
    forest->setGraphicsEffect(gump);
    QLabel *run = new QLabel("Forrest Gump\nDrama",sooncontainer);
    run->setGeometry(1225,550,150,40);
    run->setStyleSheet("background-color:transparent;font-size:17px;font-weight: bold");
    run->show();
    forest->show();
     connect(forest,&QPushButton::clicked,this,[this](){soonpanel(fores);});


}

void MainWindow::soonpanel(const comingsoon &soonmovie){

    this->theone = soonmovie;

    soonpanelcontainer = new QFrame(this);
    soonpanelcontainer->setGeometry(0,0,1920,1080);
    soonpanelcontainer->show();

    sooncontainer->hide();

    QLabel *title = new QLabel(soonpanelcontainer);
    title->setText(soonmovie.title);
    title->setGeometry(350,160,320,100);
    title->setStyleSheet("background-color:transparent;font-size:23px;font-weight: bold");
    title->show();

    QLabel *overview = new QLabel(soonpanelcontainer);
    overview->setText(soonmovie.Description);
    overview->setGeometry(350,210,1100,300);
    overview->setWordWrap(true);
    overview->setStyleSheet("background-color:transparent;font-size:19px;font-weight: bold");
    overview->show();

    QLabel *baner = new QLabel(soonpanelcontainer);
    baner->setPixmap(soonmovie.Banner);
    baner->setGeometry(25,160,300,500);
    baner->setScaledContents(true);
    baner->show();

    QLabel *cast = new QLabel(soonpanelcontainer);
    cast->setText(soonmovie.Cast);
    cast->setGeometry(350,460,1500,300);
    cast->setStyleSheet("background-color:transparent;font-size:19px;font-weight: bold");
    cast->show();


    QLabel *producer = new QLabel(soonpanelcontainer);
    producer->setText(soonmovie.Producer);
    producer->setGeometry(350,410,500,200);
    producer->setStyleSheet("background-color:transparent;font-size:19px;font-weight: bold");
    producer->show();


    QPushButton *sooncosita = new QPushButton("COMING SOON",soonpanelcontainer);
    sooncosita->setGeometry(650,725,200,50);
    sooncosita->setStyleSheet("background-color:red;font-size:18px;font-weight:bold");
    sooncosita->show();


    QFrame *up = new QFrame(soonpanelcontainer);
    up->setGeometry(0,0,1600,125);
    up->setStyleSheet("background-color:#121212;border-bottom:1px solid #222222");
    up->show();

    QLabel *logo = new QLabel(soonpanelcontainer);
    logo->setGeometry(-50,-5,300,150);
    logo->setStyleSheet("background-color: rgb(0,0,0,128)");
    logo->setPixmap(QPixmap(":/image/logo.png"));
    logo->setScaledContents(true);
    logo->show();

    QPushButton *back = new QPushButton("BACK",soonpanelcontainer);
    back->setGeometry(1250,165,140,50);
    back->setStyleSheet("QPushButton{background-color:#1A1A1A;font-size:18px;font-weight:bold;border:2px solid #E50914;border-radius:6px;}QPushButton:hover{background-color:#E50914;color:#FFFFFF;}");
    back->show();
    connect(back,&QPushButton::clicked,this,[this](){
        soonpanelcontainer->hide();
        sooncontainer->show();
    });

    QPushButton *logop = new QPushButton(soonpanelcontainer);
    logop->setGeometry(10,-5,195,130);
    logop->setStyleSheet("QPushButton {"
                         "   background: transparent;"
                         "   border: none;"
                         "   padding: 0px;"
                         "}"
                         "QPushButton:focus {"
                         "   outline: none;"
                         "}"
                         "QPushButton:pressed {"
                         "   background: transparent;"
                         "}");
    logop->setCursor(Qt::OpenHandCursor);
    logop->show();
    connect(logop,&QPushButton::clicked,menucontainer,&QFrame::show);
    connect(logop,&QPushButton::clicked,soonpanelcontainer,&QFrame::hide);

    QLabel *home = new QLabel("HOME",soonpanelcontainer);
    home->setGeometry(1000,50,200,100);
    home->setStyleSheet("background-color: transparent;color: #E0E0E0;font-size: 25px;font-weight: bold");
    home->show();

    QPushButton *homep = new QPushButton(soonpanelcontainer);
    homep->setGeometry(1000,90,75,25);
    homep->setStyleSheet("background-color:transparent;");
    homep->setCursor(Qt::OpenHandCursor);
    homep->show();
    connect(homep,&QPushButton::clicked, menucontainer,&QFrame::show);
    connect(homep,&QPushButton::clicked, soonpanelcontainer,&QFrame::hide);


    QLabel *comingsoon = new QLabel("COMING SOON",soonpanelcontainer);
    comingsoon->setGeometry(1100,50,200,100);
    comingsoon->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    comingsoon->show();
    QPushButton *comingsoonp = new QPushButton(soonpanelcontainer);
    comingsoonp->setGeometry(1100,90,180,25);
    comingsoonp->setStyleSheet("background-color:transparent;");
    comingsoonp->setCursor(Qt::OpenHandCursor);
    comingsoonp->show();
    connect(comingsoonp,&QPushButton::clicked,sooncontainer,&QFrame::show);
    connect(comingsoonp,&QPushButton::clicked,soonpanelcontainer,&QFrame::hide);


    QLabel *watchlist = new QLabel("WATCHLIST",soonpanelcontainer);
    watchlist->setGeometry(1300,50,200,100);
    watchlist->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    watchlist->show();
    QPushButton *watchlistp = new QPushButton(soonpanelcontainer);
    watchlistp->setGeometry(1300,90,125,25);
    watchlistp->setStyleSheet("background-color:transparent;");
    watchlistp->setCursor(Qt::OpenHandCursor);
    watchlistp->show();
    connect(watchlistp,&QPushButton::clicked,this,[this](){
        soonpanelcontainer->hide();
        wlistcontainer->show();

    });


}


void MainWindow::moviepanel(const movie &movieselect){

    this->selectmovie = movieselect;

    moviecontainer = new QFrame(this);
    moviecontainer->setGeometry(0,0,1920,1080);
    moviecontainer->show();

    menucontainer->hide();
    QLabel *title = new QLabel(moviecontainer);
    title->setText(movieselect.tittle);
    title->setGeometry(350,160,320,100);
    title->setStyleSheet("background-color:transparent;font-size:23px;font-weight: bold");
    title->show();

    QLabel *overview = new QLabel(moviecontainer);
    overview->setText(movieselect.description);
    overview->setGeometry(350,210,1100,300);
    overview->setWordWrap(true);
    overview->setStyleSheet("background-color:transparent;font-size:19px;font-weight: bold");
    overview->show();

    QLabel *baner = new QLabel(moviecontainer);
    baner->setPixmap(movieselect.banner);
    baner->setGeometry(25,160,300,500);
    baner->setScaledContents(true);
    baner->show();

    QLabel *cast = new QLabel(moviecontainer);
    cast->setText(movieselect.cast);
    cast->setGeometry(350,460,1500,300);
    cast->setStyleSheet("background-color:transparent;font-size:19px;font-weight: bold");
    cast->show();

    QPushButton *back = new QPushButton("BACK",moviecontainer);
    back->setGeometry(1250,165,140,50);
    back->setStyleSheet("QPushButton{background-color:#1A1A1A;font-size:18px;font-weight:bold;border:2px solid #E50914;border-radius:6px;}QPushButton:hover{background-color:#E50914;color:#FFFFFF;}");
    back->show();
    connect(back,&QPushButton::clicked,this,[this](){
        moviecontainer->hide();
        menucontainer->show();
    });

    addlist = new QPushButton("ADD TO WATCHLIST",moviecontainer);
    addlist->setGeometry(1230,230,200,50);
    addlist->setStyleSheet("QPushButton{background-color:#4A4A4D;font-size:18px;font-weight:bold;border:2px solid #28A745;border-radius:6px;}QPushButton:hover{background-color:#28A745;color:#FFFFFF;}");
    addlist->show();
    addlisttrue = new QPushButton("SUCCESFULLY ADDED",moviecontainer);
    addlisttrue->setGeometry(1230,230,200,50);
    addlisttrue->setStyleSheet("QPushButton{background-color:#4A4A4D;font-size:18px;font-weight:bold;border:2px solid #28A745;border-radius:6px;}QPushButton:hover{background-color:#28A745;color:#FFFFFF;}");
    connect(addlist,&QPushButton::clicked,this,[this,movieselect](){
        addlist->hide();
        addlisttrue->show();
        mywhatchlist.append(movieselect);

    });





    QLabel *producer = new QLabel(moviecontainer);
    producer->setText(movieselect.producer);
    producer->setGeometry(350,410,500,200);
    producer->setStyleSheet("background-color:transparent;font-size:19px;font-weight: bold");
    producer->show();

    QFrame *up = new QFrame(moviecontainer);
    up->setGeometry(0,0,1600,125);
    up->setStyleSheet("background-color:#121212;border-bottom:1px solid #222222");
    up->show();

    QLabel *logo = new QLabel(moviecontainer);
    logo->setGeometry(-50,-5,300,150);
    logo->setStyleSheet("background-color: rgb(0,0,0,128)");
    logo->setPixmap(QPixmap(":/image/logo.png"));
    logo->setScaledContents(true);
    logo->show();

    QPushButton *logop = new QPushButton(moviecontainer);
    logop->setGeometry(10,-5,195,130);
    logop->setStyleSheet("QPushButton {"
                         "   background: transparent;"
                         "   border: none;"
                         "   padding: 0px;"
                         "}"
                         "QPushButton:focus {"
                         "   outline: none;"
                         "}"
                         "QPushButton:pressed {"
                         "   background: transparent;"
                         "}");
    logop->setCursor(Qt::OpenHandCursor);
    logop->show();
    connect(logop,&QPushButton::clicked,menucontainer,&QFrame::show);
    connect(logop,&QPushButton::clicked,moviecontainer,&QFrame::hide);

    QLabel *home = new QLabel("HOME",moviecontainer);
    home->setGeometry(1000,50,200,100);
    home->setStyleSheet("background-color: transparent;color: #E0E0E0;font-size: 25px;font-weight: bold");
    home->show();

    QPushButton *homep = new QPushButton(moviecontainer);
    homep->setGeometry(1000,90,75,25);
    homep->setStyleSheet("background-color:transparent;");
    homep->setCursor(Qt::OpenHandCursor);
    homep->show();
    connect(homep,&QPushButton::clicked, menucontainer,&QFrame::show);
    connect(homep,&QPushButton::clicked, moviecontainer,&QFrame::hide);


    QLabel *comingsoon = new QLabel("COMING SOON",moviecontainer);
    comingsoon->setGeometry(1100,50,200,100);
    comingsoon->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    comingsoon->show();
    QPushButton *comingsoonp = new QPushButton(moviecontainer);
    comingsoonp->setGeometry(1100,90,180,25);
    comingsoonp->setStyleSheet("background-color:transparent;");
    comingsoonp->setCursor(Qt::OpenHandCursor);
    comingsoonp->show();
    connect(comingsoonp,&QPushButton::clicked,sooncontainer,&QFrame::show);
    connect(comingsoonp,&QPushButton::clicked,moviecontainer,&QFrame::hide);


    QLabel *watchlist = new QLabel("WATCHLIST",moviecontainer);
    watchlist->setGeometry(1300,50,200,100);
    watchlist->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    watchlist->show();
    QPushButton *watchlistp = new QPushButton(moviecontainer);
    watchlistp->setGeometry(1300,90,125,25);
    watchlistp->setStyleSheet("background-color:transparent;");
    watchlistp->setCursor(Qt::OpenHandCursor);
    watchlistp->show();
    connect(watchlistp,&QPushButton::clicked,this,[this](){
        moviecontainer->hide();
        wlistcontainer->show();

        wlist();

    });

    QLabel *showtime = new QLabel("SHOWTIMES",moviecontainer);
    showtime->setGeometry(700,650,150,50);
    showtime->setStyleSheet("background-color:transparent;font-size: 19px;font-weight: bold");
    showtime->show();


    QPushButton *time1 = new QPushButton("3pm",moviecontainer);
    time1->setGeometry(450,720,100,50);
    time1->setStyleSheet("Background-color:red;font-size: 17px;font-weight: bold;");
    time1->setCursor(Qt::OpenHandCursor);
    time1->show();
    connect(time1,&QPushButton::clicked,this,[this](){seats("3pm");});

    QPushButton *time2 = new QPushButton("6pm",moviecontainer);
    time2->setGeometry(600,720,100,50);
    time2->setStyleSheet("Background-color:red;font-size: 17px;font-weight: bold;");
    time2->setCursor(Qt::OpenHandCursor);
    time2->show();
    connect(time2,&QPushButton::clicked,this,[this](){seats("6pm");});

    QPushButton *time3 = new QPushButton("8pm",moviecontainer);
    time3->setGeometry(750,720,100,50);
    time3->setStyleSheet("Background-color:red;font-size: 17px;font-weight: bold;");
    time3->setCursor(Qt::OpenHandCursor);
    connect(time3,&QPushButton::clicked,this,[this](){seats("8pm");});
    time3->show();

    QPushButton *time4 = new QPushButton("10pm",moviecontainer);
    time4->setGeometry(900,720,100,50);
    time4->setStyleSheet("Background-color:red;font-size: 17px;font-weight: bold;");
    time4->setCursor(Qt::OpenHandCursor);
    connect(time4,&QPushButton::clicked,this,[this](){seats("10pm");});
    time4->show();



}

void MainWindow::seats(const QString &timechoice){

    this->time = timechoice;

    seatscontainer = new QFrame(this);
    seatscontainer->setGeometry(0,0,1920,1080);

    QFrame *up = new QFrame(seatscontainer);
    up->setGeometry(0,0,1600,125);
    up->setStyleSheet("background-color:#121212;border-bottom:1px solid #222222");
    up->show();

    QLabel *logo = new QLabel(seatscontainer);
    logo->setGeometry(-50,-5,300,150);
    logo->setStyleSheet("background-color: rgb(0,0,0,128)");
    logo->setPixmap(QPixmap(":/image/logo.png"));
    logo->setScaledContents(true);
    logo->show();
    QPushButton *logop = new QPushButton(seatscontainer);
    logop->setGeometry(10,-5,195,130);
    logop->setStyleSheet("QPushButton {"
                         "   background: transparent;"
                         "   border: none;"
                         "   padding: 0px;"
                         "}"
                         "QPushButton:focus {"
                         "   outline: none;"
                         "}"
                         "QPushButton:pressed {"
                         "   background: transparent;"
                         "}");
    logop->setCursor(Qt::OpenHandCursor);
    logop->show();
    connect(logop,&QPushButton::clicked,menucontainer,&QFrame::show);
    connect(logop,&QPushButton::clicked,seatscontainer,&QFrame::hide);



    QLabel *home = new QLabel("HOME",seatscontainer);
    home->setGeometry(1000,50,200,100);
    home->setStyleSheet("background-color: transparent;color: #E0E0E0;font-size: 25px;font-weight: bold");
    home->show();

    QPushButton *homep = new QPushButton(seatscontainer);
    homep->setGeometry(1000,90,75,25);
    homep->setStyleSheet("background-color:transparent;");
    homep->setCursor(Qt::OpenHandCursor);
    homep->show();
    connect(homep,&QPushButton::clicked, menucontainer,&QFrame::show);
    connect(homep,&QPushButton::clicked, seatscontainer,&QFrame::hide);


    QLabel *comingsoon = new QLabel("COMING SOON",seatscontainer);
    comingsoon->setGeometry(1100,50,200,100);
    comingsoon->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    comingsoon->show();
    QPushButton *comingsoonp = new QPushButton(seatscontainer);
    comingsoonp->setGeometry(1100,90,180,25);
    comingsoonp->setStyleSheet("background-color:transparent;");
    comingsoonp->setCursor(Qt::OpenHandCursor);
    comingsoonp->show();
    connect(comingsoonp,&QPushButton::clicked,sooncontainer,&QFrame::show);
    connect(comingsoonp,&QPushButton::clicked,seatscontainer,&QFrame::hide);


    QLabel *watchlist = new QLabel("WATCHLIST",seatscontainer);
    watchlist->setGeometry(1300,50,200,100);
    watchlist->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    watchlist->show();
    QPushButton *watchlistp = new QPushButton(seatscontainer);
    watchlistp->setGeometry(1300,90,125,25);
    watchlistp->setStyleSheet("background-color:transparent;");
    watchlistp->setCursor(Qt::OpenHandCursor);
    watchlistp->show();
    connect(watchlistp,&QPushButton::clicked,this,[this](){
        seatscontainer->hide();
        wlistcontainer->show();

    });

    QPushButton *back = new QPushButton("BACK",seatscontainer);
    back->setGeometry(250,188,140,50);
    back->setStyleSheet("QPushButton{background-color:#1A1A1A;font-size:18px;font-weight:bold;border:2px solid #E50914;border-radius:6px;}QPushButton:hover{background-color:#E50914;color:#FFFFFF;}");
    back->show();
    connect(back,&QPushButton::clicked,this,[this](){
        seatscontainer->hide();
        moviecontainer->show();
    });


    QFrame *screen = new QFrame(seatscontainer);
    screen->setGeometry(475,188,600,80);
    screen->setStyleSheet("background-color: #222226; "
                          "color: #a0a0a0; "
                          "border-top: 3px solid #e50914; " // Red accent bar on top
                          "border-radius: 4px; "
                          "font-weight: bold; "
                          "font-size: 16px;");
    screen->show();
    QLabel *Screent = new QLabel("SCREEN 1",seatscontainer);
    Screent->setGeometry(735,188,100,80);
    Screent->setStyleSheet("Background-color:transparent;font-size:20px;font-weight:bold;color:white");
    Screent->show();

    for(int r=0;r<5;r++){
        char letters = 'A'+ r ;
        for(int c = 0;c<8;c++){
            QString seatId = QString(letters) + QString::number(c+1);

            QPushButton *asientico = new QPushButton(seatId,seatscontainer);
            asientico->setGeometry(400 + c * 100, 400 + r * 60, 50, 45);
            asientico->setCheckable(true);
            asientico->setCursor(Qt::OpenHandCursor);
            asientico->setStyleSheet(
                "QPushButton {"
                "   background-color: #25252d;"
                "   color: #8e8e93;"
                "   border-top-left-radius: 10px;"
                "   border-top-right-radius: 10px;"
                "   border-bottom-left-radius: 4px;"
                "   border-bottom-right-radius: 4px;"
                "   font-weight: bold;"
                "   font-size: 12px;"
                "   border: 1px solid #33333d;"
                "}"
                "QPushButton:hover {"
                "   background-color: #3a3a48;"
                "   color: #ffffff;"
                "}"
                "QPushButton:checked {"
                "   background-color: #e50914;"
                "   color: #ffffff;"
                "   border: 1px solid #ff3333;"
                "}"
                );
            asientico->show();
            connect(asientico,&QPushButton::clicked,this,[this,seatId](){Buy(seatId);});
        }
    }




    seatscontainer->show();
    moviecontainer->hide();
}

void MainWindow::Buy(const QString &seatId){
    this -> seat = seatId;



    QFrame *prize = new QFrame(seatscontainer);
    prize->setGeometry(1180,188,340,280);
    prize->setStyleSheet("QFrame {"
                         "   background-color: #141418;"
                         "   border: 1px solid #282830;"
                         "   border-radius: 10px;"
                         "}");
    prize->show();
    QLabel *tprize = new QLabel("TICKET PRICE: 500 DP\n\n\nDO YOU WANT TO BUY IT?",prize);
    tprize->setGeometry(20, 40, 340, 100);
    tprize->setStyleSheet("QLabel {"
                          "   background-color: transparent;"
                          "   color: #ffffff;"
                          "   font-size: 18px;"
                          "   font-weight: bold;"
                          "   border: none;"
                          "}");
    tprize->show();
    QPushButton *yes = new QPushButton("BUY",prize);
    yes->setGeometry(30, 210, 100, 50);
    yes->setStyleSheet("QPushButton {"
                       "   background-color: #e50914;"
                       "   color: white;"
                       "   font-size: 14px;"
                       "   font-weight: bold;"
                       "   border-radius: 6px;"
                       "}"
                       "QPushButton:hover {"
                       "   background-color: #f6121d;"
                       "}");
    yes->setCursor(Qt::OpenHandCursor);
    yes->show();
    QPushButton *no = new QPushButton("CANCEL",prize);
    no->setGeometry(200, 210, 100, 50);
    no->setStyleSheet("QPushButton {"
                      "   background-color: #e50914;"
                      "   color: white;"
                      "   font-size: 14px;"
                      "   font-weight: bold;"
                      "   border-radius: 6px;"
                      "}"
                      "QPushButton:hover {"
                      "   background-color: #f6121d;"
                      "}");
    no->setCursor(Qt::OpenHandCursor);
    no->show();
    connect(no,&QPushButton::clicked,prize,&QFrame::hide);



    connect(yes,&QPushButton::clicked,this,[this](){recibo();});
    connect(yes,&QPushButton::clicked,seatscontainer,&QFrame::hide);
}

void MainWindow::recibo(){

    invoicecontainer = new QFrame(this);
    invoicecontainer->setGeometry(0,0,1920,1080);
    invoicecontainer->show();

    currectinvoice.title = selectmovie.tittle;
    currectinvoice.showtime=time;
    currectinvoice.priceinvoice =500 ;
    currectinvoice.seats = seat;
    currectinvoice.invoiceid = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm AP");

    QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString filename = desktopPath + "/invoice" + QDateTime::currentDateTime().toString("yyyy--MM--dd_hh-mm_AP")+".txt";
    QFile file (filename);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << "========================================\n";
        out << "           ATRACADORE CINEMA            \n";
        out << "========================================\n";
        out << "Movie:    " << currectinvoice.title << "\n";
        out << "Showtime: " << currectinvoice.showtime << "\n";
        out << "Seat:     " << currectinvoice.seats << "\n";
        out << "Date/ID:  " << currectinvoice.invoiceid << "\n";
        out << "----------------------------------------\n";
        out << "Total:    " << currectinvoice.priceinvoice << " DOP\n";
        out << "========================================\n";
        file.close();
    }

    QString details = QString(
                          "<b>--------------INVOICE--------------<</b> <br><br>"
                          "<b>Movie:</b> %1<br><br>"
                          "<b>Showtime:</b> %2<br><br>"
                          "<b>seat:</b> %3<br><br>"
                          "<b>Invoice details:</b> %4<br><br>"
                          "<b>Total:</b> %5 <b>DOP</b><br><br>"
                          )
                          .arg(currectinvoice.title)
                          .arg(currectinvoice.showtime)
                          .arg(currectinvoice.seats)
                          .arg(currectinvoice.invoiceid)
                          .arg(currectinvoice.priceinvoice);

    QFrame *detailsbackground = new QFrame(invoicecontainer);
    detailsbackground->setGeometry(550,170,440,500);
    detailsbackground->setStyleSheet("background-color:#141418");
    detailsbackground->show();

    invo = new QLabel(details,detailsbackground);
    invo->setGeometry(50,0,500,500);
    invo->setStyleSheet("background-color:transparent;font-size:22px;font-weight:bold");
    invo->show();

    Proced = new QPushButton("PROCEED",detailsbackground);
    Proced->setGeometry(130,425,200,50);
    Proced->setStyleSheet("QPushButton {"
                          "   background-color: #e50914;"
                          "   color: white;"
                          "   font-size: 14px;"
                          "   font-weight: bold;"
                          "   border-radius: 6px;"
                          "}"
                          "QPushButton:hover {"
                          "   background-color: #f6121d;"
                          "}");
    Proced->setCursor(Qt::OpenHandCursor);
    Proced->show();
    connect(Proced,&QPushButton::clicked,this,[this](){
        invo->hide();
        Proced->show();
        saved->show();
        ok->show();
        thanks->show();
    });


    saved = new QLabel("Your invoice is\nsaved in the desktop",detailsbackground);
    saved->setGeometry(20,60,400,100);
    saved->setStyleSheet("background-color:transparent;color:white;font-size:40px;font-weight:bold");
    saved->hide();
    thanks = new QLabel("Tanks you for the\n pucharce",detailsbackground);
    thanks->setGeometry(20,230,400,100);
    thanks->setStyleSheet("background-color:transparent;color:white;font-size:40px;font-weight:bold");
    thanks->hide();
    ok = new QPushButton("PROCEED",detailsbackground);
    ok->setGeometry(130,425,200,50);
    ok->setStyleSheet("QPushButton {"
                          "   background-color: #e50914;"
                          "   color: white;"
                          "   font-size: 14px;"
                          "   font-weight: bold;"
                          "   border-radius: 6px;"
                          "}"
                          "QPushButton:hover {"
                          "   background-color: #f6121d;"
                          "}");
    ok->setCursor(Qt::OpenHandCursor);
    connect(ok,&QPushButton::clicked,invoicecontainer,&QFrame::hide);
    connect(ok,&QPushButton::clicked,menucontainer,&QFrame::show);





    QFrame *up = new QFrame(invoicecontainer);
    up->setGeometry(0,0,1600,125);
    up->setStyleSheet("background-color:#121212;border-bottom:1px solid #222222");
    up->show();

    QLabel *logo = new QLabel(invoicecontainer);
    logo->setGeometry(-50,-5,300,150);
    logo->setStyleSheet("background-color: rgb(0,0,0,128)");
    logo->setPixmap(QPixmap(":/image/logo.png"));
    logo->setScaledContents(true);
    logo->show();
    QPushButton *logop = new QPushButton(invoicecontainer);
    logop->setGeometry(10,-5,195,130);
    logop->setStyleSheet("QPushButton {"
                         "   background: transparent;"
                         "   border: none;"
                         "   padding: 0px;"
                         "}"
                         "QPushButton:focus {"
                         "   outline: none;"
                         "}"
                         "QPushButton:pressed {"
                         "   background: transparent;"
                         "}");
    logop->setCursor(Qt::OpenHandCursor);
    logop->show();
    connect(logop,&QPushButton::clicked,menucontainer,&QFrame::show);
    connect(logop,&QPushButton::clicked,invoicecontainer,&QFrame::hide);

    QLabel *home = new QLabel("HOME",invoicecontainer);
    home->setGeometry(1000,50,200,100);
    home->setStyleSheet("background-color: transparent;color: #E0E0E0;font-size: 25px;font-weight: bold");
    home->show();

    QPushButton *homep = new QPushButton(invoicecontainer);
    homep->setGeometry(1000,90,75,25);
    homep->setStyleSheet("background-color:transparent;");
    homep->setCursor(Qt::OpenHandCursor);
    homep->show();
    connect(homep,&QPushButton::clicked, menucontainer,&QFrame::show);
    connect(homep,&QPushButton::clicked, invoicecontainer,&QFrame::hide);


    QLabel *comingsoon = new QLabel("COMING SOON",invoicecontainer);
    comingsoon->setGeometry(1100,50,200,100);
    comingsoon->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    comingsoon->show();
    QPushButton *comingsoonp = new QPushButton(invoicecontainer);
    comingsoonp->setGeometry(1100,90,180,25);
    comingsoonp->setStyleSheet("background-color:transparent;");
    comingsoonp->setCursor(Qt::OpenHandCursor);
    comingsoonp->show();
    connect(comingsoonp,&QPushButton::clicked,sooncontainer,&QFrame::show);
     connect(comingsoonp,&QPushButton::clicked,invoicecontainer,&QFrame::hide);



    QLabel *watchlist = new QLabel("WATCHLIST",invoicecontainer);
    watchlist->setGeometry(1300,50,200,100);
    watchlist->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    watchlist->show();
    QPushButton *watchlistp = new QPushButton(invoicecontainer);
    watchlistp->setGeometry(1300,90,125,25);
    watchlistp->setStyleSheet("background-color:transparent;");
    watchlistp->setCursor(Qt::OpenHandCursor);
    watchlistp->show();
    connect(watchlistp,&QPushButton::clicked,this,[this](){
        invoicecontainer->hide();
        wlistcontainer->show();

    });
}

void MainWindow::wlist(){
    if (!wlistcontainer) {
        wlistcontainer = new QFrame(this);
        wlistcontainer->setGeometry(0, 0, 1920, 1080);
    } else {

        qDeleteAll(wlistcontainer->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly));
    }



    QFrame *up = new QFrame(wlistcontainer);
    up->setGeometry(0,0,1600,125);
    up->setStyleSheet("background-color:#121212;border-bottom:1px solid #222222");
    up->show();

    QLabel *logo = new QLabel(wlistcontainer);
    logo->setGeometry(-50,-5,300,150);
    logo->setStyleSheet("background-color: rgb(0,0,0,128)");
    logo->setPixmap(QPixmap(":/image/logo.png"));
    logo->setScaledContents(true);
    logo->show();
    QPushButton *logop = new QPushButton(wlistcontainer);
    logop->setGeometry(10,-5,195,130);
    logop->setStyleSheet("QPushButton {"
                         "   background: transparent;"
                         "   border: none;"
                         "   padding: 0px;"
                         "}"
                         "QPushButton:focus {"
                         "   outline: none;"
                         "}"
                         "QPushButton:pressed {"
                         "   background: transparent;"
                         "}");
    logop->setCursor(Qt::OpenHandCursor);
    logop->show();
    connect(logop,&QPushButton::clicked,menucontainer,&QFrame::show);
    connect(logop,&QPushButton::clicked,wlistcontainer,&QFrame::hide);


    QFrame *midle1 = new QFrame(wlistcontainer);
    midle1->setGeometry(0,155,605,5);
    midle1->setStyleSheet("background-color: white");
    midle1->show();

    QFrame *midle2 = new QFrame(wlistcontainer);
    midle2->setGeometry(600,155,1000,5);
    midle2->setStyleSheet("background-color: white");
    midle2->show();

    QLabel *seelater = new QLabel("WATCHLIST",wlistcontainer);
    seelater->setGeometry(640,130,245,50);
    seelater->setStyleSheet("color:white;backgroud-color: transparent;font-size:45px;font-weight: bold");
    seelater->show();


    QLabel *home = new QLabel("HOME",wlistcontainer);
    home->setGeometry(1000,50,200,100);
    home->setStyleSheet("background-color: transparent;color: #E0E0E0;font-size: 25px;font-weight: bold");
    home->show();

    QPushButton *homep = new QPushButton(wlistcontainer);
    homep->setGeometry(1000,90,75,25);
    homep->setStyleSheet("background-color:transparent;");
    homep->setCursor(Qt::OpenHandCursor);
    homep->show();
    connect(homep,&QPushButton::clicked, menucontainer,&QFrame::show);
    connect(homep,&QPushButton::clicked, wlistcontainer,&QFrame::hide);


    QLabel *comingsoon = new QLabel("COMING SOON",wlistcontainer);
    comingsoon->setGeometry(1100,50,200,100);
    comingsoon->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    comingsoon->show();
    QPushButton *comingsoonp = new QPushButton(wlistcontainer);
    comingsoonp->setGeometry(1100,90,180,25);
    comingsoonp->setStyleSheet("background-color:transparent;");
    comingsoonp->setCursor(Qt::OpenHandCursor);
    comingsoonp->show();
    connect(comingsoonp,&QPushButton::clicked,sooncontainer,&QFrame::show);
    connect(comingsoonp,&QPushButton::clicked,wlistcontainer,&QFrame::hide);



    QLabel *watchlist = new QLabel("WATCHLIST",wlistcontainer);
    watchlist->setGeometry(1300,50,200,100);
    watchlist->setStyleSheet("background-color: rgb(0,0,0,128);color: white;font-size: 25px;font-weight: bold");
    watchlist->show();
    QPushButton *watchlistp = new QPushButton(wlistcontainer);
    watchlistp->setGeometry(1300,90,125,25);
    watchlistp->setStyleSheet("background-color:transparent;");
    watchlistp->setCursor(Qt::OpenHandCursor);
    watchlistp->show();

    for(int i=0;i<mywhatchlist.size();i++){
        const movie &m = mywhatchlist[i];


    QPushButton *poster = new QPushButton(wlistcontainer);
    poster->setGeometry(20 + (i * 300), 150, 240, 500);
    poster->setIcon(QIcon(m.banner));
    poster->setIconSize(QSize(240, 500));
    poster->setStyleSheet("background-color: transparent; border: none;");
    poster->setCursor(Qt::PointingHandCursor);


    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(poster);
    shadow->setBlurRadius(25);
    shadow->setColor(QColor("white"));
    shadow->setOffset(0, 0);
    poster->setGraphicsEffect(shadow);
    poster->show();

    QLabel *titleLbl = new QLabel(m.tittle, wlistcontainer);
    titleLbl->setGeometry(25 + (i * 300), 530, 230, 40);
    titleLbl->setStyleSheet("background-color: transparent; font-size: 16px; font-weight: bold; color: white;");
    titleLbl->show();

    connect(poster, &QPushButton::clicked, this, [this, m](){
        wlistcontainer->hide();
        moviepanel(m);

    });
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://fonts.googleapis.com/icon?family=Material+Icons+Sharp" rel="stylesheet">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" />
    <link rel="stylesheet" href="../style.css">
    <title>Evenement Administration</title>
</head>

<body>

    <div class="container">
        <!-- Sidebar Section -->
        <aside>
            <div class="toggle">
                <div class="logo">
                    <h2>Galerie<span class="danger">Creators</span></h2>
                </div>
                <div class="close" id="close-btn">
                    <span class="material-icons-sharp">
                        close
                    </span>
                </div>
            </div>

            <div class="sidebar">
                <a href="../index.html" class="not-active">
                    <span class="material-icons-sharp">
                        dashboard
                    </span>
                    <h3>Dashboard</h3>
                </a>
                <a href="../utilisateur/utilisateur.html" class="not-active">
                    <span class="material-icons-sharp">
                        person_outline
                    </span>
                    <h3>Utilisateurs</h3>
                </a>
                <a href="../evenement/evenement.html" class="active">
                    <span class="material-symbols-outlined">
                    event
                    </span>
                    <h3>Evenements</h3>
                </a>
                <a href="../commande/commande.html" class="not-active">
                    <span class="material-icons-sharp">
                        insights
                    </span>
                    <h3>Commandes</h3>
                </a>
                <a href="../post/post.html" class="not-active">
                    <span class="material-icons-sharp">
                        mail_outline
                    </span>
                    <h3>Posts</h3>
                    <span class="message-count">27</span>
                </a>
                <a href="../galerie/galerie.html" class="not-active">
                    <span class="material-icons-sharp">inventory</span>
                    <h3>Galeries</h3>
                </a>
                <a href="../produit/produit.html" class="not-active">
                    <span class="material-icons-sharp">
                        settings
                    </span>
                    <h3>Produits</h3>
                </a>
                <a href="#" class="not-active">
                    <span class="material-icons-sharp">report_gmailerrorred</span>
                    <h3>Reports</h3>
                </a>
                
                <a href="#">
                    <span class="material-icons-sharp">
                        logout
                    </span>
                    <h3>Logout</h3>
                </a>
            </div>
        </aside>
        <!-- End of Sidebar Section -->

        <!-- Main Content -->
        <main>
            <h1>Evenements</h1>
            <!-- Analyses -->
            <div class="analyse">
                <div class="sales">
                    <div class="status">
                        <div class="info">
                            <h3>Total Sales</h3>
                            <h1>$65,024</h1>
                        </div>
                        <div class="progresss">
                            <svg>
                                <circle cx="38" cy="38" r="36"></circle>
                            </svg>
                            <div class="percentage">
                                <p>+81%</p>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="visits">
                    <div class="status">
                        <div class="info">
                            <h3>Site Visit</h3>
                            <h1>24,981</h1>
                        </div>
                        <div class="progresss">
                            <svg>
                                <circle cx="38" cy="38" r="36"></circle>
                            </svg>
                            <div class="percentage">
                                <p>-48%</p>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="searches">
                    <div class="status">
                        <div class="info">
                            <h3>Searches</h3>
                            <h1>14,147</h1>
                        </div>
                        <div class="progresss">
                            <svg>
                                <circle cx="38" cy="38" r="36"></circle>
                            </svg>
                            <div class="percentage">
                                <p>+21%</p>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
            <!-- End of Analyses -->

            <!-- New Users Section -->
            <div class="new-users">
                <h2>Nouveaux evenements</h2>
                <div class="user-list">
                    <div class="user">
                        <img src="../images/event-sousse.jpg">
                        <h2>Evenement Sousse</h2>
                        <p id="event-sousse">01/01/2023</p>
                    </div>
                    <div class="user">
                        <img src="../images/event-lac.jpg">
                        <h2>Evenement Lac</h2>
                        <p>05/12/2023</p>
                    </div>
                    <div class="user">
                        <img src="../images/event-tunis.jpg">
                        <h2>Evenement Tunis</h2>
                        <p>25/09/2023</p>
                    </div>
                    <div class="user">
                        <a href="addEvenement.php"><img src="../images/plus.png"><h2>ajouter</h2></a>
                        <p>evenement</p>
                    </div>
                </div>
            </div>
            <!-- End of New Users Section -->

        </main>
        <!-- End of Main Content -->

        <!-- Right Section -->
        <div class="right-section">
            <div class="nav">
                <button id="menu-btn">
                    <span class="material-icons-sharp">
                        menu
                    </span>
                </button>
                <div class="dark-mode">
                    <span class="material-icons-sharp active">
                        light_mode
                    </span>
                    <span class="material-icons-sharp">
                        dark_mode
                    </span>
                </div>

                <div class="profile">
                    <div class="info">
                        <p>Hey, <b id="admin_name">Anwar</b></p>
                        <small class="text-muted">Admin</small>
                    </div>
                    <div class="profile-photo">
                        <img src="../images/profile-1.jpg">
                    </div>
                </div>

            </div>
            <!-- End of Nav -->

            <div class="user-profile">
                <div class="logo">
                    <img src="../images/logo.png">
                    <h2>GalerieCreators</h2>
                    <p>Best Fullstack Web Developer Team</p>
                </div>
            </div>

            <div class="reminders">
                <div class="header">
                    <h2>Reminders</h2>
                    <span class="material-icons-sharp">
                        notifications_none
                    </span>
                </div>

                <div class="notification">
                    <div class="icon">
                        <span class="material-icons-sharp">
                            volume_up
                        </span>
                    </div>
                    <div class="content">
                        <div class="info">
                            <h3>Workshop</h3>
                            <small class="text_muted">
                                08:00 AM - 12:00 PM
                            </small>
                        </div>
                        <span class="material-icons-sharp">
                            more_vert
                        </span>
                    </div>
                </div>
                <div class="notification add-reminder">
                    <div>
                        <span class="material-icons-sharp">
                            add
                        </span>
                        <h3>Add Reminder</h3>
                    </div>
                </div>

            </div>

        </div>


    </div>

    <script src="../orders.js"></script>
    <script src="../index.js"></script>
</body>

</html>
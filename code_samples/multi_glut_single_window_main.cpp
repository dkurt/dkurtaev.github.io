document.write('<link rel="stylesheet" href="code_samples/gist-embed-b03925b9c18fa42b22f168e7d17a7ca70ca50a4126cbfca9f91a1a8bc79b5905.css">')
document.write('<div id=\"gist39130677\" class=\"gist\">\n    <div class=\"gist-file\">\n      <div class=\"gist-data\">\n        <div class=\"js-gist-file-update-container js-task-list-container file-box\">\n  <div id=\"file-multi_glut_single_window_main-cpp\" class=\"file\">\n    \n\n  <div itemprop=\"text\" class=\"blob-wrapper data type-c\">\n      <table class=\"highlight tab-size js-file-line-container\" data-tab-size=\"8\">\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L1\" class=\"blob-num js-line-number\" data-line-number=\"1\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC1\" class=\"blob-code blob-code-inner js-file-line\">#<span class=\"pl-k\">include<\/span> <span class=\"pl-s\"><span class=\"pl-pds\">&lt;<\/span>GL/freeglut.h<span class=\"pl-pds\">&gt;<\/span><\/span><\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L2\" class=\"blob-num js-line-number\" data-line-number=\"2\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC2\" class=\"blob-code blob-code-inner js-file-line\">\n<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L3\" class=\"blob-num js-line-number\" data-line-number=\"3\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC3\" class=\"blob-code blob-code-inner js-file-line\"><span class=\"pl-k\">int<\/span> <span class=\"pl-en\">main<\/span>(<span class=\"pl-k\">int<\/span> argc, <span class=\"pl-k\">char<\/span>** argv) {<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L4\" class=\"blob-num js-line-number\" data-line-number=\"4\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC4\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glutInit<\/span>(&amp;argc, argv);  <span class=\"pl-c\">// GLUT initialization.<\/span><\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L5\" class=\"blob-num js-line-number\" data-line-number=\"5\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC5\" class=\"blob-code blob-code-inner js-file-line\">\n<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L6\" class=\"blob-num js-line-number\" data-line-number=\"6\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC6\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c\">// Window initialization.<\/span><\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L7\" class=\"blob-num js-line-number\" data-line-number=\"7\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC7\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glutInitWindowSize<\/span>(<span class=\"pl-c1\">324<\/span>, <span class=\"pl-c1\">324<\/span>);  <span class=\"pl-c\">// Width, height of window.<\/span><\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L8\" class=\"blob-num js-line-number\" data-line-number=\"8\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC8\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glutInitWindowPosition<\/span>(<span class=\"pl-c1\">0<\/span>, <span class=\"pl-c1\">0<\/span>);  <span class=\"pl-c\">// (x, y) position of window from top-left.<\/span><\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L9\" class=\"blob-num js-line-number\" data-line-number=\"9\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC9\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-k\">int<\/span> window_id = <span class=\"pl-c1\">glutCreateWindow<\/span>(<span class=\"pl-s\"><span class=\"pl-pds\">&quot;<\/span>Single view<span class=\"pl-pds\">&quot;<\/span><\/span>);<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L10\" class=\"blob-num js-line-number\" data-line-number=\"10\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC10\" class=\"blob-code blob-code-inner js-file-line\">\n<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L11\" class=\"blob-num js-line-number\" data-line-number=\"11\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC11\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glutDisplayFunc<\/span>(display);  <span class=\"pl-c\">// Set callback.<\/span><\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L12\" class=\"blob-num js-line-number\" data-line-number=\"12\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC12\" class=\"blob-code blob-code-inner js-file-line\">\n<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L13\" class=\"blob-num js-line-number\" data-line-number=\"13\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC13\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-c1\">glutMainLoop<\/span>();  <span class=\"pl-c\">// Start GLUT&#39;s internal loop. Exit by window closing.<\/span><\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L14\" class=\"blob-num js-line-number\" data-line-number=\"14\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC14\" class=\"blob-code blob-code-inner js-file-line\">  <span class=\"pl-k\">return<\/span> <span class=\"pl-c1\">0<\/span>;<\/td>\n      <\/tr>\n      <tr>\n        <td id=\"file-multi_glut_single_window_main-cpp-L15\" class=\"blob-num js-line-number\" data-line-number=\"15\"><\/td>\n        <td id=\"file-multi_glut_single_window_main-cpp-LC15\" class=\"blob-code blob-code-inner js-file-line\">}<\/td>\n      <\/tr>\n<\/table>\n\n  <\/div>\n\n  <\/div>\n  \n<\/div>\n\n      <\/div>\n      <div class=\"gist-meta\">\n        <a href=\"https://gist.github.com/dkurtaev/9976876ae1edea6a493ded3eb7479a64/raw/b54fcfa7e8b0ffb24e7f9fcce690a24a2e01fa8e/multi_glut_single_window_main.cpp\" style=\"float:right\">view raw<\/a>\n        <a href=\"https://gist.github.com/dkurtaev/9976876ae1edea6a493ded3eb7479a64#file-multi_glut_single_window_main-cpp\">multi_glut_single_window_main.cpp<\/a>\n        hosted with &#10084; by <a href=\"https://github.com\">GitHub<\/a>\n      <\/div>\n    <\/div>\n<\/div>\n')

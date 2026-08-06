

//carousel

//Array storage class
let carouselArr = [];


//class Carousel
class Carousel {

    constructor(image, title, url) {
        this.image = image;
        this.title = title;
        this.url = url;
    }

    static Start(arr) {
        if (arr) {

            if (arr.length > 0) {
                Carousel._sequence = 0;
                Carousel._size = arr.length;
                Carousel.Next(); //start
                if (Carousel._interval) {
                    clearInterval(Carousel._interval);
                }
                Carousel._interval = setInterval(function () { Carousel.Next(); }, 2000);
            }

        } else {
            throw "Method Start need a Array Variable.";
        }
    }

    static Next() {
        if (Carousel._sequence >= Carousel._size) {
            Carousel._sequence = 0;
        }
        let current = carouselArr[Carousel._sequence];
        let divCarousel = document.getElementById("carousel");
        let divTitle = document.getElementById("carousel-title");

        if (divCarousel) {
            divCarousel.innerHTML = `<img src="${current.image}" alt="${current.title}">`;
        }
        if (divTitle) {
            divTitle.innerHTML = `<a href="${current.url}">${current.title}</a>`;
        }

        let currentRadio = document.getElementById("carousel-radio-" + (Carousel._sequence + 1));
        if (currentRadio) {
            currentRadio.checked = true;
        }

        Carousel._sequence++;
    }

    static GoTo(index) {
        if (Carousel._interval) {
            clearInterval(Carousel._interval);
        }
        Carousel._sequence = index;
        Carousel.Next();
        Carousel._interval = setInterval(function () { Carousel.Next(); }, 4000);
    }
    static previous_next(number) {
        if (Carousel._interval) {
            clearInterval(Carousel._interval);
        }

        if (number === -1) {
            Carousel._sequence -= 2;
        }

        if (Carousel._sequence >= Carousel._size) {
            Carousel._sequence = 0;
        } else if (Carousel._sequence < 0) {
            Carousel._sequence = Carousel._size - 1;
        }

        Carousel.Next();

        Carousel._interval = setInterval(function () { Carousel.Next(); }, 4000);
    }
}
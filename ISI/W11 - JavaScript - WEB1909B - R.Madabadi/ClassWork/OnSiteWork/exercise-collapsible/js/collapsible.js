const Collapsible = (function () {
    const COLLAPSIBLE_CLASS = 'collapsible'
    const H_CLASS = 'collapsible-h'
    const DIV_CLASS = 'collapsible-div'
    const OPEN_CLASS = 'collapsible-open'
    const CLOSE_CLASS = 'collapsible-close'

    function onClickEventHandler (hElement, divElement) {
        if (divElement.style.display === 'block') {
            divElement.style.display = 'none'
            hElement.classList.remove(OPEN_CLASS)
            hElement.classList.add(CLOSE_CLASS)
        } else {
            divElement.style.display = 'block'
            hElement.classList.remove(CLOSE_CLASS)
            hElement.classList.add(OPEN_CLASS)
        }
    }

    function initCollapsible (element) {
        element.classList.add(COLLAPSIBLE_CLASS)

        const hElement = element.firstElementChild
        const divElement = element.querySelector('div')

        hElement.classList.add(H_CLASS, CLOSE_CLASS)
        hElement.addEventListener('click', function () {
            onClickEventHandler(hElement, divElement)
        })

        divElement.classList.add(DIV_CLASS)
        divElement.style.display = 'none'
    }

    return {
        init: function (config) {
            const collapsibles = Array.from(document.getElementsByClassName(config.className))
            collapsibles.forEach(initCollapsible)
        }
    }
})()

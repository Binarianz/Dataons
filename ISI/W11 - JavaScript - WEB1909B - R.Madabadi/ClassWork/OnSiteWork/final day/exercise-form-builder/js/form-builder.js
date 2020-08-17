// eslint-disable-next-line no-unused-vars
const FormBuilder = (function () {
    'use strict'
    class FieldBuilder {
        constructor (field) {
            this.field = field
        }

        createElement (tagName, attributes) {
            const element = document.createElement(tagName)

            attributes.forEach(function (attribut) {
                element.setAttribute(attribut.name, attribut.value)
            })

            return element
        }

        createFieldElement (tagName, attributes) {
            const element = this.createElement(tagName, attributes)
            element.setAttribute('id', this.field.id)
            element.setAttribute('name', this.field.id)
            return element
        }

        build () {
            const labelElement = this.createElement('label', [{ name: 'for', value: this.field.id }])
            labelElement.appendChild(document.createTextNode(this.field.label))
            labelElement.classList.add('label-' + this.field.type)

            const divElement = this.createElement('div', [])
            divElement.appendChild(labelElement)

            return divElement
        }
    }

    class InputFieldBuilder extends FieldBuilder {
        build () {
            const divElement = super.build()
            const inputElement = this.createFieldElement('input', [])
            inputElement.setAttribute('type', this.field.type)

            if (this.field.required) {
                inputElement.setAttribute('required', this.field.required)
            }

            if (this.field.minlength) {
                inputElement.setAttribute('minlength', this.field.minlength)
            }
            if (this.field.maxlength) {
                inputElement.setAttribute('maxlength', this.field.maxlength)
            }

            if (this.field.min) {
                inputElement.setAttribute('min', this.field.min)
            }
            if (this.field.max) {
                inputElement.setAttribute('max', this.field.max)
            }

            divElement.appendChild(inputElement)

            return divElement
        }
    }

    class TextAreaFieldBuilder extends FieldBuilder {
        build () {
            const divElement = super.build()

            const textareaElement = this.createFieldElement('textarea', [])
            if (this.field.required) {
                textareaElement.setAttribute('required', this.field.required)
            }

            divElement.appendChild(textareaElement)

            return divElement
        }
    }

    function buildField (field) {
        let fieldBuilder

        switch (field.type.toLowerCase()) {
        case 'text':
        case 'password':
        case 'number':
        case 'date':
            fieldBuilder = new InputFieldBuilder(field)
            break

        case 'textarea':
            fieldBuilder = new TextAreaFieldBuilder(field)
            break

        default:
            throw Error('Unknown field type: ' + field.type)
        }

        return fieldBuilder.build()
    }

    function buildButton () {
        const buttonElement = document.createElement('button')
        buttonElement.appendChild(document.createTextNode('Update'))

        return buttonElement
    }

    return {
        init: function (form, result) {
            const formElement = document.getElementById(form.id)
            formElement.addEventListener('submit', function (event) {
                event.preventDefault()

                const fieldsValue = Object.values(formElement).reduce(function (valuesObject, field) {
                    if (field.name) {
                        valuesObject[field.name] = field.value
                    }
                    return valuesObject
                }, {})

                console.log(fieldsValue)
                result.innerHTML = JSON.stringify(fieldsValue, null, '    ')
            })

            form.fields.forEach(function (field) {
                formElement.appendChild(buildField(field))
            })

            formElement.appendChild(buildButton())
        }
    }
})()

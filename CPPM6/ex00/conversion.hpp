/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:28:31 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/24 19:29:36 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <exception>
#include <string>

#define INT				0
#define FLOAT			1
#define DOUBLE			2
#define CHAR			3
#define PSEUDO_LITERAL	4

class conversion {
	private:
		char		*str;
		int			_type;
		char		_char;
		int			_int;
		float		_float;
		double		_double;
		char		*_pseudo_literal;

		void		detectType(void);

		static bool	isInt(char *str);
		static bool	isFloat(char *str);
		static bool	_isDouble(char *str);
		void		_convertNumeric(void);
		void		_convertFrom(void);

		void 		print(int vchar, int vint, int vfloat, int vdouble);
		bool		checkOverflow(double checkValue);
		bool		_typeOverflow(double checkValue);

		conversion(void);

	class TypeNotFound : public std::exception
	{
		public:
			virtual const char* what() const throw() {
				return ("This is not a valid input");
			}
	};

	public:
		conversion(char *str);
		conversion(conversion const &instance);
		conversion	&operator=(conversion const &obj);
		~conversion(void);

		void	display(void);
};

#endif
